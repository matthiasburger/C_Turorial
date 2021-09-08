#include <stdio.h>
#include <string.h>

typedef enum {
    EXIT, LIST, ADD, WRONG_SELECTION
} menu_selection;

typedef struct {
    int amount_stored;
} storage_info;

typedef struct {
    int number;
    char title[20];
} cd;

cd storage[50] = {0x00};

menu_selection chose_menu() {
    char menu;
    scanf_s(" %c", &menu);

    if (menu == 'x') return EXIT;
    if (menu == 'l') return LIST;
    if (menu == 'a') return ADD;

    return WRONG_SELECTION;
}

void get_title(char *str, int length){
    printf("Enter a title: ");

    int char_position = 0;

    do {
        char c;
        scanf(" %c", &c);

        if (c == '\n')
        {
            str[char_position] = '\0';
            return;
        }

        str[char_position++] = c;
    } while (char_position < length);

}

void add(storage_info *info) {
    int current_index = info->amount_stored;

    char str[20] = {0x00};
    get_title(str, 20);

    printf("%s", str);

    cd new_cd = {
            .number = current_index + 1,
            .title = "<no value>"
    };

    strncpy(new_cd.title, str, strlen(str));

    storage[current_index] = new_cd;

    info->amount_stored++;
}

void list(storage_info *info) {
    int current_index = info->amount_stored;

    for (int index = 0; index < current_index; index++) {
        cd stored_disk = storage[index];

        printf("%d\n", stored_disk.number);
        printf("%s\n", stored_disk.title);
    }
}

int main() {

    storage_info info = {0};
    storage_info *ptr_info = &info;

    do {
        printf("Watcha wanna do? ");
        menu_selection selection = chose_menu();

        switch (selection) {
            case ADD:
                add(ptr_info);
                break;
            case EXIT:
                return 0;
            case LIST:
                list(ptr_info);
                break;
            case WRONG_SELECTION:
                break;
            default:
                break;
        }

    } while (1);

    return 0;
}

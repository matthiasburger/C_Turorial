#include <stdio.h>

#define ARRAY_LENGTH 5
#define NAME_LENGTH 20

#define KEY_ENTER '\n' // or better use 10 ??? dunno...

int main() {

    char manufacturers[ARRAY_LENGTH][NAME_LENGTH] = {0x00};

    int index = 0;
    while (index < ARRAY_LENGTH) {
        int char_position = 0;

        printf("Bitte geben Sie einen Hersteller an.\n");

        do {
            char c;
            scanf_s("%c", &c);

            if (c == KEY_ENTER)
                break;

            manufacturers[index][char_position++] = c;
        } while (char_position <= NAME_LENGTH); // todo: doesn't work. doesn't break when too many characters :(

        printf("Hersteller: ");
        for (int i = 0; i < NAME_LENGTH; ++i) {
            char character = manufacturers[index][i];
            printf("%c", character);
        }
        printf("\n");

        index++;
    }

    return 0;
}

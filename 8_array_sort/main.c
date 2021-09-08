#include <stdio.h>

int main() {
    char values[] = {'C', 'E', 'D', 'B', 'F', 'A'};

    int switched;
    do {
        switched = 0;
        for (int i = 1; i < sizeof(values); ++i) {
            char last = values[i - 1];
            char current = values[i];

            if (current >= last)
                continue;

            char tmp = values[i - 1];
            values[i - 1] = current;
            values[i] = tmp;

            switched++;
        }
    } while (switched != 0);

    for (int i = 0; i < sizeof(values); ++i) {
        char current = values[i];
        printf("%c", current);
    }

    return 0;
}

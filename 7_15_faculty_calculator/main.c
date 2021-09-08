#include <stdio.h>

int main() {
    int entry_value = 9;
    int return_value = 1;

    for(int index = entry_value; index > 0; index --)
        return_value *= index;

    printf("result: %d", return_value);

    return 0;
}

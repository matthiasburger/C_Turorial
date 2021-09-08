#include <stdio.h>

typedef enum {
    black, white, silver, red, blue, green, yellow
} color;

typedef int cui;

typedef struct car {
    char manufacturer[100];
    char model[100];
    color color;
    int top_speed;
    cui displacement;
} t_car;

int main() {
    printf("Hello, World!\n");
    return 0;
}

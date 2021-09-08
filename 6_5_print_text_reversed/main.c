#include <stdio.h>

int main() {
    char str1[9];

    printf("Enter name: ");
    scanf("%s", str1);


    printf("Entered Name: %s\n", str1);

    for(int i = 8; i >= 0; i--){
        printf("%c", str1[i]);
    }

    return(0);
}

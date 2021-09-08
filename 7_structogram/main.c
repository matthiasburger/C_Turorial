#include <stdio.h>

int main() {
    int a, i;

    do{
        a = 0;

        printf("Bitte geben Sie eine Note ein: \n");
        scanf("%d", &i);

        switch (i) {
            case 1:
                printf("Sehr gut.\n");
                a = 1;
                break;
            case 2:
                printf("Gut.\n");
                a = 1;
                break;
            case 3:
                printf("Befriedigend.\n");
                a = 1;
                break;
            case 4:
                printf("Ausreichend.\n");
                a = 1;
                break;
            case 5:
                printf("Mangelhaft.\n");
                a = 1;
                break;
            case 6:
                printf("Ungenügend.\n");
                a = 1;
                break;
            default:
                printf("Ungültiger Wert.\n");

        }
    }
    while(a == 0);

    return 0;
}

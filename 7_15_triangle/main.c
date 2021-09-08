#include <stdio.h>

int can_build_triangle(double* first, double* second, double* third){
    return *first > 0 && *second > 0 && *third > 0;
}

int main() {
    printf("Bitte geben Sie alle 3 Seiten des Dreiecks an: \n");

    double first, second, third;
    scanf("%lf%lf%lf", &first, &second, &third);

    if (!can_build_triangle(&first, &second, &third))
    {
        printf("Mindestens eine Zahl ist ungueltig fuer ein Dreieck.");
        return -1;
    }

    if(first == second && second == third) {
        printf("Das Dreieck ist gleichseitig");
        return 0;
    }
    if(first == second || second == third || first == third){
        printf("Das Dreieck ist gleichschenklig");
        return 0;
    }

    printf("Das Dreieck ist unregelmaessig.");

    return 0;
}

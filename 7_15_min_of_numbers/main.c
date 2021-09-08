#include <stdio.h>

double calc_min_value(double first, double second){
    return first > second ? second : first;
}

int main() {
    printf("Enter two numbers to define the minimum!\n");

    double first, second;
    scanf("%lf%lf", &first, &second);

    printf("The lower value is %lf", calc_min_value(first, second));

    return 0;
}

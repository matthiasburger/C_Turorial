#include <stdio.h>

double calculate_insurance_rate(double value){
    return (value > 1000 ? 0.0015 : 0.005) * value;
}

int main() {

    double first_amount = 20;
    double second_amount = 990;
    double third_amount = 1100;

    printf("the insurance rate for %5.2lf is %5.2lf\n", first_amount, calculate_insurance_rate(first_amount));
    printf("the insurance rate for %5.2lf is %5.2lf\n", second_amount, calculate_insurance_rate(second_amount));
    printf("the insurance rate for %5.2lf is %5.2lf\n", third_amount, calculate_insurance_rate(third_amount));
    return 0;
}

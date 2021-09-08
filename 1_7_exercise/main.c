#include <stdio.h>

void exercise_2_5(void){
    printf("Hello World\n");

    int i = 5;
    int j = 7;

    printf("Die Summe aus %d und %d ist %d\n", i, j , i+j);
    printf("Name\tVorname\tWohnort\nBurger\tMatthias\tMöhlin\nBurger\tRoland\tLaufenburg\nBurger\tMarkus\tLuzern\n");
}

void exercise_3_5(void){
    static const double CalculationValue = 273.15;
    double kelvinTemperature = 350;

    printf("%fK = %f°C", kelvinTemperature, kelvinTemperature-CalculationValue);
}

void exercise_4_10(void){
    const double first_value = 129.3232;
    const double second_value = 23.391;

    double addition = first_value + second_value;
    printf("%5.3f \n", addition);

    double subtraction = first_value - second_value;
    printf("%5.3f \n", subtraction);

    double multiplication = first_value * second_value;
    printf("%5.3f \n", multiplication);

    double division = first_value / second_value;
    printf("%5.3f \n", division);

    printf("--------------------\n");

    const int value = 1258;
    printf("%d\n", value);

    double d_value = (double)value;
    printf("%1.3E\n", d_value);

    printf("%X\n", value);
}

void switch_variables(int* first, int* second){
    int value_first = *first;

    *first = *second;
    *second = value_first;
}

void calculate_deduction(char* name, double percentage, double salary, double* net){
    printf("%s : %5.2f : ", name, percentage);

    double deduction = salary / 100 * percentage;
    *net -= deduction;

    printf("%5.2f\n", deduction);
}

void calculate_salary(double salary){
    printf("Bruttolohn: %5.2f\n", salary);

    double net = salary;

    calculate_deduction("AHV", 5.3, salary, &net);
    calculate_deduction("ALV", 1.1, salary, &net);
    calculate_deduction("UVG", 0.9, salary, &net);
    calculate_deduction("KTG", 0.43, salary, &net);
    calculate_deduction("QSt", 14.7, salary, &net);

    net -= 243.95;
    printf("Nettolohn: %5.2f\n", net);

}


void exercise_5_6(){
    int first_value = 4;
    int second_value = 10;

    printf("first value is %d\n", first_value);
    printf("second value is %d\n", second_value);

    switch_variables(&first_value, &second_value);

    printf("first value is %d\n", first_value);
    printf("second value is %d\n", second_value);
    printf("\n\n");

    calculate_salary(10800);
}

int main(void) {

    exercise_5_6();

    return 0;
}

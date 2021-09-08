#include <stdio.h>

struct calculation{
    double first_value;
    double second_value;
    char operand;

    double result;
};

struct calculation menu(){
    printf("Bitte waehlen Sie einen Operanden aus. \n");
    char operand;
    scanf("%c", &operand);


    printf("Bitte waehlen Sie 2 Zahlen aus. \n");

    double first_value, second_value;

    scanf("%lf%lf", &first_value, &second_value);


    struct calculation calculation = {
            first_value,
            second_value,
            operand
    };

    return calculation;
};

void add(struct calculation* calculation){
    calculation->result = calculation->first_value + calculation->second_value;
}
void multiply(struct calculation* calculation){
    calculation->result = calculation->first_value * calculation->second_value;
}
void subtract(struct calculation* calculation){
    calculation->result = calculation->first_value - calculation->second_value;
}
void divide(struct calculation* calculation){
    calculation->result = calculation->first_value / calculation->second_value;
}

void calculate(struct calculation* calculation){
    switch (calculation->operand) {
        case '+':
            add(calculation);
            return;
        case '*':
            multiply(calculation);
            return;
        case '-':
            subtract(calculation);
            return;
        case '/':
            divide(calculation);
            return;
    }
}

int main() {
    struct calculation calculation = menu();

    calculate(&calculation);

    printf("%5.2f %c %5.2f = %5.2f", calculation.first_value, calculation.operand, calculation.second_value, calculation.result);

    return 0;
}

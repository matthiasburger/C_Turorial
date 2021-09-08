#include <stdio.h>

char operand;
int first_value, second_value;

void add(){
    int result = first_value + second_value;
    printf("Ergebnis aus %d %c %d = %d", first_value, operand, second_value, result);
}
void subtract(){
    int result = first_value - second_value;
    printf("Ergebnis aus %d %c %d = %d", first_value, operand, second_value, result);
}
void multiply(){
    int result = first_value * second_value;
    printf("Ergebnis aus %d %c %d = %d", first_value, operand, second_value, result);
}
void divide(){
    int result = first_value / second_value;
    printf("Ergebnis aus %d %c %d = %d\n", first_value, operand, second_value, result);
}

int main() {

    printf("Bitte geben Sie den Operaden an: \n");
    scanf_s("%c", &operand);
    printf("Die Antwort war %c \n", operand);

    printf("Bitte geben Sie die beiden zu berechnenden Zahlen ein: \n");
    scanf_s("%d%d", &first_value, &second_value);
    printf("%d und %d\n", first_value, second_value);



    if (operand == '+')
        add();
    if (operand == '-')
        subtract();
    if (operand == '*')
        multiply();
    if (operand == '/')
        divide();

    return 0;
}

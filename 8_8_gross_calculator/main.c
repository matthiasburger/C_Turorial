#include <stdio.h>

#define VALUE_PAIRS 5

double calculate_gross(double net, double tax_percentage) {
    return ((tax_percentage / 100) + 1) * net;
}

int main() {

    double values[VALUE_PAIRS][2];

    for (int i = 0; i < VALUE_PAIRS; i++) {
        printf("Please enter the net price and the tax\n");
        scanf("%lf%lf", &values[i][0], &values[i][1]);
    }


    for (int i = 0; i < VALUE_PAIRS; i++) {
        double net_value = values[i][0];
        double tax_percentage = values[i][1];
        double gross_value = calculate_gross(net_value, tax_percentage);

        printf("Gross-value from %5.2lf (tax: %5.2lf%%) = %5.2lf\n", net_value, tax_percentage, gross_value);
    }


    return 0;
}

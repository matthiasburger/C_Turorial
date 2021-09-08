#include <stdio.h>

int get_lower_number(int first, int second){
    return first < second? first : second;
}

int get_higher_number(int first, int second){
    return first > second? first : second;
}

int get_greatest_common_divisor(int higher, int lower){
    int difference = higher - lower;

    if(difference == 0)
        return lower;

    return get_greatest_common_divisor(lower, difference);
}

int main() {
    int first = 35;
    int second = 21;

    int higher = get_higher_number(first, second);
    int lower = get_lower_number(first, second);

    int greatest_common_divisor = get_greatest_common_divisor(higher, lower);

    printf("Greatest common divisor out of %d and %d is %d\n", first, second, greatest_common_divisor);
    return 0;
}

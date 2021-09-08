#include <stdio.h>

int searchedNumber;


int searchNumber(int low, int high, int* guess){
    int foundNumber = (low + high) / 2;

    *guess += 1;

    printf("Versuche mit %d: ", foundNumber);

    if (foundNumber > searchedNumber)
    {
        printf("%d ist groesser als %d\n", foundNumber, searchedNumber);
        return searchNumber(low, foundNumber, guess);
    }
    else if (foundNumber < searchedNumber)
    {
        printf("%d ist kleiner als %d\n", foundNumber, searchedNumber);
        return searchNumber(foundNumber, high, guess);
    }
    else return foundNumber;
}

int main() {
    const int minRange = 0;
    const int maxRange = 1000;

    int guess = 0;

    do {
        printf("Geben Sie eine Zahl zwischen %d und %d an: \n", minRange, maxRange);
        scanf("%d", &searchedNumber);
    } while(searchedNumber > maxRange || searchedNumber < minRange);

    int foundNumber = searchNumber(minRange, maxRange, &guess);
    printf("Die Zahl war %d (%d Versuche) \n", foundNumber, guess);

    return 0;
}

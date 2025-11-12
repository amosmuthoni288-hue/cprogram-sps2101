#include <stdio.h>

// Function prototype (declaration)
float calculate_electric_bill(int units);

int main() {
    int units;
    float total;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    total = calculate_electric_bill(units);

    printf("Total electric bill = Ksh %.2f\n", total);

    return 0;
}

// Function definition
float calculate_electric_bill(int units) {
    float bill;

    if (units <= 100) {
        bill = units * 10;
    } 
    else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } 
    else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}
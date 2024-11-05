#include <stdio.h>

int main() {
    float number;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%f", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int number;

    printf("--- Even or Odd Checker ---\n");

    // Ask the user to input a number
    printf("Enter any number: ");
    scanf("%d", &number);

    // If the remainder when divided by 2 is 0, it is even
    if (number % 2 == 0) {
        printf("%d is an EVEN number.\n", number);
    } 
    else {
        printf("%d is an ODD number.\n", number);
    }

    return 0;
}

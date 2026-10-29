#include <stdio.h>

int main() {
    int num;

    printf("--- Positive, Negative, or Zero Checker ---\n");

    // Taking input from the student/user
    printf("Enter any number: ");
    scanf("%d", &num);

    // Checking the conditions one by one
    if (num > 0) {
        printf("%d is a POSITIVE number.\n", num);
    } 
    else if (num < 0) {
        printf("%d is a NEGATIVE number.\n", num);
    } 
    else {
        printf("The number is ZERO.\n");
    }

    return 0;
}

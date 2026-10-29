#include <stdio.h>

int main() {
    // 1. Create variables to hold the numbers and the final average
    // We use 'float' so the program can handle decimals
    float num1, num2, num3, average;

    printf("--- Average Calculator ---\n");

    // 2. Ask the user to input the three numbers
    // %f tells scanf to look for a float number
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    // 3. Calculate the average
    // Brackets ensure addition happens before the division
    average = (num1 + num2 + num3) / 3.0;

    // 4. Print the final answer
    // %.2f prints the answer up to 2 decimal places (e.g., 5.33 instead of 5.333333)
    printf("\nThe average of the three numbers is: %.2f\n", average);

    return 0;
}

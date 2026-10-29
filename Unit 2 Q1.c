#include <stdio.h>

int main() {
    // Declaring simple variables for our calculations
    int a = 10;
    int b = 5;
    int c = 2;
    int result1;
    int result2;

    printf("--- Operator Order of Execution Demo ---\n\n");

    // DEMO 1: Multiplication happens before Addition (* before +)
    // Expression: 10 + 5 * 2
    // Expected: 5 * 2 = 10, then 10 + 10 = 20
    result1 = a + b * c; 
    printf("Test 1 without brackets:\n");
    printf("Equation: %d + %d * %d\n", a, b, c);
    printf("The result is: %d (Because multiplication happens first!)\n\n", result1);

    // DEMO 2: Brackets change the order completely ()
    // Expression: (10 + 5) * 2
    // Expected: 10 + 5 = 15, then 15 * 2 = 30
    result2 = (a + b) * c;
    printf("Test 2 with brackets:\n");
    printf("Equation: (%d + %d) * %d\n", a, b, c);
    printf("The result is: %d (Because brackets force addition first!)\n\n", result2);

    return 0;
}

#include <stdio.h>

int main() {
    // 1. Declare variables
    float radius, area;
    
    // Define the value of Pi (constant)
    float pi = 3.14159;

    // 2. Ask the user for the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // 3. Calculate the area (Formula: Pi * radius * radius)
    area = pi * radius * radius;

    // 4. Display the result
    // %.2f limits the output to 2 decimal places
    printf("\nThe area of the circle is: %.2f\n", area);

    return 0;
}

#include <stdio.h>

int main() {
    int age;
    float price;
    double exact_value;
    char group;

    printf("Enter an integer (e.g., age): ");
    scanf("%d", &age);

    printf("Enter a float decimal (e.g., price): ");
    scanf("%f", &price);

    printf("Enter a double decimal (e.g., precise value): ");
    scanf("%lf", &exact_value);

    printf("Enter a single character (e.g., section/group): ");
    scanf(" %c", &group);

    printf("\n===== Collected Data Summary =====\n");
    printf("Integer value   : %d\n", age);
    printf("Float value     : %.2f\n", price);
    printf("Double value    : %.4lf\n", exact_value);
    printf("Character value : %c\n", group);

    return 0;
}

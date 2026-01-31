#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = a + b;
            printf("Result = %.2f", result);
            break;
        case 2:
            result = a - b;
            printf("Result = %.2f", result);
            break;
        case 3:
            result = a * b;
            printf("Result = %.2f", result);
            break;
        case 4:
            if(b != 0)
                result = a / b;
            else {
                printf("Division by zero not allowed");
                return 0;
            }
            printf("Result = %.2f", result);
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}
#include <stdio.h>

int main()
{
    char operator = '\0';
    double num1, num2, result = 0.0;

    printf("Welcome to the Simple Calculator Program!\n\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Enter an operator between (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
        break;
    case '/':
        result = num1 - num2;
        printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
        break;
    default:
        printf("Error: Invalid operator (%c). Please use +, -, *, or /.\n", operator);
        main();
    }

    printf("\n");
    printf("Thank you for using the Simple Calculator Program!\n");
    int choice = 0;
    printf("Do you want to perform another calculation? (1 for Yes, 0 for No): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\n");
        main();
        break;
    case 0:
        printf("Exiting the program. Goodbye!\n");
        break;
    default:
        printf("Invalid choice. Exiting the program.\n");
        break;
    }

    return 0;
}
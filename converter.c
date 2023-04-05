#include <stdio.h>

int main() {
    float amount, converted_amount;
    int choice;

    printf("Currency Converter\n");
    printf("1. USD to EUR\n");
    printf("2. EUR to USD\n");
    printf("3. USD to GBP\n");
    printf("4. GBP to USD\n");
    printf("5. EUR to GBP\n");
    printf("6. GBP to EUR\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the amount to convert: ");
    scanf("%f", &amount);

    switch (choice) {
        case 1:
            converted_amount = amount * 0.85;
            printf("$%.2f = €%.2f\n", amount, converted_amount);
            break;
        case 2:
            converted_amount = amount * 1.17;
            printf("€%.2f = $%.2f\n", amount, converted_amount);
            break;
        case 3:
            converted_amount = amount * 0.72;
            printf("$%.2f = £%.2f\n", amount, converted_amount);
            break;
        case 4:
            converted_amount = amount * 1.39;
            printf("£%.2f = $%.2f\n", amount, converted_amount);
            break;
        case 5:
            converted_amount = amount * 0.86;
            printf("€%.2f = £%.2f\n", amount, converted_amount);
            break;
        case 6:
            converted_amount = amount * 1.16;
            printf("£%.2f = €%.2f\n", amount, converted_amount);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
    }

    return 0;
}

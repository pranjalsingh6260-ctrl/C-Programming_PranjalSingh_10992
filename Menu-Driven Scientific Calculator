#include <stdio.h>

int main() {
    int choice;
    int num, base, exp;
    int result;
    char repeat;

    do {
        // Print menu
        printf("\n===== MENU =====\n");
        printf("1. Square of a number\n");
        printf("2. Cube of a number\n");
        printf("3. Power (base^exponent) \n");
        printf("4. Exit  (˶` _ `˶)\n");
        printf("------Under 1-4------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                result = num * num;   // square using multiplication
                printf("Square = %d\n", result);
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                result = num * num * num;   // cube using multiplication
                printf("Cube = %d\n", result);
                break;

            case 3:
                printf("Enter base: ");
                scanf("%d", &base);
                printf("Enter exponent/power: ");
                scanf("%d", &exp);

                result = 1;
                for (int i = 1; i <= exp; i++) {
                    result = result * base;   // power using loop
                }

                printf("Result = %d\n", result);
                break;

            case 4:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }

        printf("\nDo you want to continue new start ジ? (y/n): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
//MADE BY PRANJAL SINGH -- SQUARE/CUBE/POWER__CALCULATOR

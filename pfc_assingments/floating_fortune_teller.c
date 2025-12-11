#include <stdio.h>

int main() {
    float num;

    // Step 1: Take input from the user
    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    // Step 2: Display the number in different formats
    printf("\n Float Format Specifier Demo\n");
    printf("=====================================\n");

    printf("1. %%f       : %f\n", num);
    printf("2. %%.1f     : %.1f\n", num);
    printf("3. %%.2f     : %.2f\n", num);
    printf("4. %%.3f     : %.3f\n", num);
    printf("5. %%6.2f    : %6.2f\n", num);
    printf("6. %%8.3f    : %8.3f\n", num);
    printf("7. %%0.2f    : %0.2f\n", num);
    printf("8. %%10.4f   : %10.4f\n", num);
    printf("9. %%e (scientific) : %e\n", num);
    printf("10. %%E (scientific): %E\n", num);
    printf("11. %%g (auto)       : %g\n", num);
    printf("12. %%G (auto)       : %G\n", num);

    printf("=====================================\n");
    printf("Pranjal Singh, ERP -- RU-25-10992");

    return 0;
}

#include <stdio.h>

int main() {
    int X, thirdSet;

   printf("Enter the weight (in kg) for the first set: ");
    scanf("%d", &X);

   if (X >= 1 && X <= 100) {
        
        thirdSet = X + 2 * 10;  // 2 increments of 10 kg
        printf("Weight in the 3rd set: %d kg\n", thirdSet);
    } else {
        printf("Invalid input! Please enter a weight between 1 and 100 kg.\n");
    }
    printf("Pranjal Singh, ERP -- RU-25-10992");

    return 0; 
}
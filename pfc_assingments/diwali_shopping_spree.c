#include <stdio.h>

int main() {
    int A, B, amountToPay;

    // Input: gift price and voucher value
    printf("Enter the price of the gift (A): ");
    scanf("%d", &A);

    printf("Enter the value of the discount voucher (B): ");
    scanf("%d", &B);

    // Check constraints
    if (A >= 1 && B >= 1 && B <= 5000) {
       
        if (B >= A) {
            amountToPay = 0; 
            printf("\v Voucher covers the full price --- ");
        }
         else {
             amountToPay = A - B; // Pay the remaining amount
            
          printf("\v Amount to pay: Rs. %d", amountToPay);}
    } 
    else {
        printf(" Invalid input! Enter values between 1 and 5000.\n");
    }

    return 0;
}

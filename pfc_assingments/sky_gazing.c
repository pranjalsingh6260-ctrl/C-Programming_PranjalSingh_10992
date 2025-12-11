#include <stdio.h>

int main() {
    int A, B; // A = morning clouds, B = evening clouds

    
    printf("Enter the number of clouds in the morning: ");
    scanf("%d", &A);

    printf("Enter the number of clouds in the evening: ");
    scanf("%d", &B);

    
    
    if (A < 1 || A > 20 || B < 1 || B > 20) {
        printf(" Invalid input! Please enter numbers between 1 and 20.\n");
    }
    
    else{ 
        if (B >= 3 * A) {
        printf(" It will rain!\n");}
    
    else {
        printf(" The weather will stay dry.\n");
    }
}
    printf("Pranjal Singh, ERP -- RU-25-10992");

    return 0; 
}

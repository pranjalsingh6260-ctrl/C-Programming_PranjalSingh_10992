#include <stdio.h>

int main() {
    int N, total_leaves;

    printf(" total number of clovers Rohan found [1-10]: ");
    scanf("%d", &N);

    
    if (N >= 1 && N <= 10) {
        
        total_leaves = 4 + 3 * (N - 1); //total leaves
        printf("%d\v\v", total_leaves);
    } else {
       
        printf("Please enter a number between 1 and 10.");
    }
 printf("Pranjal singh, RU-25-10992");
    return 0;
}

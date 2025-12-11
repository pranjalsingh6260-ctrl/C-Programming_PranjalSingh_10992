#include <stdio.h>

int main() {
    int L;

    printf("Enter the game level [1-10]: ");
    scanf("%d", &L);

    // Check if the level is between 1 and 10 (constraint)
    if (L >= 1 && L <= 10) {
        // Check valid game levels (1 to 5)
        if (L == 1)
            printf("reward points he earns = 10\n");
        else if (L == 2)
            printf("reward points he earns = 20\n");
        else if (L == 3)
            printf("reward points he earns = 30\n");
        else if (L == 4)
            printf(" reward points he earns = 40\n");
        else if (L == 5)
            printf("reward points he earns = 50\n");
        else
            printf("Invalid Level! 🚫\n");
    } else {
        // If level is outside the constraint range
        printf("Please enter a level between 1 and 10.\n");
    }
    printf("Pranjal singh , RU-25-10992");
    return 0;
}

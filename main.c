#include <stdio.h>

int main() {
    int score;

    // Prompt user to enter the score
    printf("Enter the score (0-100): ");
    scanf("%d", &score);

    // Validate score range
    if (score < 0 || score > 100) {
        printf("Invalid score! Please enter a number between 0 and 100.\n");
    } else {
        // Determine letter grade based on score
        if (score >= 90) {
            printf("Grade: A\n");
        } else if (score >= 80) {
            printf("Grade: B\n");
        } else if (score >= 70) {
            printf("Grade: C\n");
        } else if (score >= 60) {
            printf("Grade: D\n");
        } else {
            printf("Grade: F\n");
        }
    }

    return 0;
}

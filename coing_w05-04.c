#include <stdio.h>

int main() {
    // Declare variables to store data of 3 users
    char name[3];           // Initial (1 uppercase character)
    int age[3];             // Age (integer)
    float height[3];        // Height in centimeters (1 decimal place)
    float weight[3];        // Weight in kilograms (1 decimal place)
    char grade[3];          // Grade code (A, B, or C)

    // Input data for 3 users
    for(int i = 0; i < 3; i++) {
        // Read user input: Name * Age * Height * Weight * Grade
        scanf(" %c * %d * %f * %f * %c", &name[i], &age[i], &height[i], &weight[i], &grade[i]);
    }

    // Output header
    printf("\n%-5s %-5s %-12s %-12s %-11s\n", "Name", "Age", "Height(cm)", "Weight(kg)", "Grade Code");
    printf("----------------------------------------------------------\n");

    // Output data for each user
    for(int i = 0; i < 3; i++) {
        printf("%-5c %-5d %-12.1f %-12.1f %-11c\n", name[i], age[i], height[i], weight[i], grade[i]);
    }

    return 0;
}

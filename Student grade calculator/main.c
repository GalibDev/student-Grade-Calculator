


#include <stdio.h>

// Function to calculate grade
char getGrade(float percentage) {
    if (percentage >= 80)
        return 'A+';
    else if (percentage >= 70)
        return 'A';
    else if (percentage >= 60)
        return 'B';
    else if (percentage >= 50)
        return 'C';
    else
        return 'F';
}

int main() {
    int numSubjects, i;
    float marks[100], total = 0, percentage;

    // Input: Number of subjects
    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);

    // Input: Marks for each subject
    for (i = 0; i < numSubjects; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks[i]);  // Taking float input
        total += marks[i];       // Adding marks to total
    }

    // Calculate percentage
    percentage = total / numSubjects;

    // Display result
    printf("\nTotal Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", getGrade(percentage));

    return 0;
}

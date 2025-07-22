#include <stdio.h>

void calculateDivision(float percentage) {
    if (percentage >= 90) {
        printf("Division: Distinction\n");
    } else if (percentage >= 80) {
        printf("Division: First\n");
    } else if (percentage >= 70) {
        printf("Division: Second\n");
    } else if (percentage >= 60) {
        printf("Division: Third\n");
    } else if (percentage >= 50) {
        printf("Division: Pass\n");
    } else {
        printf("Division: Fail\n");
    }
}

int main() {
    int marksObtained, totalMarks;
    float percentage;

    printf("Enter total marks: ");
    scanf("%d", &totalMarks);

    printf("Enter marks obtained: ");
    scanf("%d", &marksObtained);

    if (marksObtained > totalMarks) {
        printf("Invalid input! Marks obtained cannot exceed total marks.\n");
        return 1;
    }

    percentage = (float)marksObtained / totalMarks * 100;
    printf("Percentage: %.2f%%\n", percentage);

    calculateDivision(percentage);

    return 0;
}


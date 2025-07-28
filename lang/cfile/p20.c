
#include <stdio.h>
#include <math.h>

// Function to calculate area of triangle
float triangleArea(float base, float height) {
    return 0.5 * base * height;
}

// Function to calculate area of rectangle
float rectangleArea(float length, float width) {
    return length * width;
}

// Function to calculate area of circle
float circleArea(float radius) {
    return 3.14159 * radius*radius ;
}

int main() {
    int choice;
    float base, height, length, width, radius;

    printf("Geometry Calculator\n");
    printf("1. Triangle Area\n");
    printf("2. Rectangle Area\n");
    printf("3. Circle Area\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter base and height of triangle: ");
            scanf("%f %f", &base, &height);
            printf("Triangle Area: %.2f\n", triangleArea(base, height));
            break;
        case 2:
            printf("Enter length and width of rectangle: ");
            scanf("%f %f", &length, &width);
            printf("Rectangle Area: %.2f\n", rectangleArea(length, width));
            break;
        case 3:
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            printf("Circle Area: %.2f\n", circleArea(radius));
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}


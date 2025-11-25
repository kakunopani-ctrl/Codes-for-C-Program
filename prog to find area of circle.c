#include <stdio.h>
#define PI 3.14159

// Define a structure for Circle
struct Circle {
    float radius;
    float area;
};

int main() {
    struct Circle c;   // Declare a Circle variable

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &c.radius);

    // Calculate area
    c.area = PI * c.radius * c.radius;

    // Display result
    printf("Radius = %.2f\n", c.radius);
    printf("Area of the circle = %.2f\n", c.area);

    return 0;
}

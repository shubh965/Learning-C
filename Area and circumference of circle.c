#include <stdio.h>

int main() {
    float r;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    
    printf("\nThe circumference of the circle is: %f \nThe area of the circle is: %f", 2*3.14159*r, 3.14159*r*r);
    
    return 0;
}

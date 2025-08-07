#include <stdio.h>

int main() {
    float l, b;
    printf("Enter the length of rectangle: ");
    scanf("%f", &l);
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &b);
    
    printf("\nThe perimeter of rectangle is: %f \nThe area of the rectangle is: %f", 2*(l+b), l*b);
    
    return 0;
}

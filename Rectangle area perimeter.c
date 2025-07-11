#include <stdio.h>

int main() {
    int l, b;
    printf("Enter the length of rectangle: ");
    scanf("%d", &l);
    printf("Enter the breadth of rectangle: ");
    scanf("%d", &b);
    printf("\nThe perimeter of rectangle is: %d \nThe area of the rectangle is: %d", l+b, l*b);
    return 0;
}

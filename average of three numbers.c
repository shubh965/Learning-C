#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);
    
    printf("The average of the three numbers is: %d", (a+b+c)/3);

    return 0;
}

#include <stdio.h>

int main() {
    float a,b;
    char c;
    
    printf("Enter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);
    printf("Enter the operation u want to perform (+,-,*,/): ");
    scanf(" %c", &c);
    
    if (c=='+'){
        printf("The sum of the two numbers is: %f\n", a+b);
    } else if (c=='-'){
        printf("The subtraction of the two numbers is: %f\n", a-b);
    } else if (c=='*'){
        printf("The multiplication of the numbers is: %f\n", a*b);
    } else if (c=='/'){
        b!=0 ? printf("The division of the two numbers is: %f\n", a/b) : printf("You cannot divide by 0.\n");
    } else {
        printf("Please enter a valid operator.\n");
    }

    return 0;
}

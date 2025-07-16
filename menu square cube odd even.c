#include <stdio.h>

int main() {
    int m, a;
    printf("1 - Square of the number\n2 - Cube of the number\n3 - Odd/Even\n\n");
    printf("Select one of the operations of the above u want to perform: ");
    scanf("%d", &m);
    printf("Enter the number u want to perform the operation on: ");
    scanf("%d", &a);
    
    switch (m){
        case 1:
            printf("The square of the number is: %d\n", a*a);
            break;
        case 2:
            printf("The cube of the number is: %d\n", a*a*a);
            break;
        case 3:
            a<0 ? printf("Enter a positive number.\n") : (a%2==0 ? printf("The number is even.\n") : printf("The number is odd.\n"));
        default:
            printf("Please enter a valid operation.");
    }

    return 0;
}

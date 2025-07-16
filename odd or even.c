#include <stdio.h>

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    
    a >=0 ? (a%2==0 ? printf("The number is positive and even.\n") : printf("The number is positive and odd.\n")) : printf("The number is negative.\n");
    return 0;
}

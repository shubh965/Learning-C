#include <stdio.h>

int main() {
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    
    if (x>0) {
        printf("The number is a natural and whole number.");
    } else if (x==0) {
        printf("The number is a whole number.");
    } else {
        printf("The number is neither whole nor natural.");
    }

    return 0;
}

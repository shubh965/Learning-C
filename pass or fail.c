#include <stdio.h>

int main() {
    int a;
    printf("Enter the marks: ");
    scanf("%d", &a);
    
    a>=33 ? printf("You have passed!") : printf("You have failed.");

    return 0;
}

#include <stdio.h>

int main() {
    int a;
    printf("Enter the marks: ");
    scanf("%d", &a);
    
    if (a>=0 && a<=100){
        a>=33 ? printf("You have passed!") : printf("You have failed.");
    } else {
        printf("!!! Marks can only be 0-100 !!!");
    }

    return 0;
}

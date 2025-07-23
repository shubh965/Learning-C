#include <stdio.h>

int main() {
    int n, f=1;
    printf("Enter the number whose factorial u want: ");
    scanf("%d", &n);
    
    for (int i=n; i>=1; i--) {
        f*=i;
    }
    
    printf("The factorial of %d is %d: ", n, f);

    return 0;
}

#include <stdio.h>

int main() {
    int n=0, a=10;
    printf("Enter the number whose table you want to print in reverse: ");
    scanf("%d", &n);
    
    while(a>=1){
        printf("%d x %d = %d\n", n, a, n*a);
        a--;
    }

    return 0;
}

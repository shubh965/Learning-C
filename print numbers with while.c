#include <stdio.h>

int main() {
    int i=0, n;
    printf("Enter the number till when u want to print: ");
    scanf("%d", &n);
    while (i<=n) {
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}

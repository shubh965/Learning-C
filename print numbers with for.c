#include <stdio.h>

int main() {
    int n;
    printf("Enter the number till when u want to print: ");
    scanf("%d", &n);
    for (int i=0; i<=n; i++) {
        printf("%d\n", i);
    }
    
    return 0;
}

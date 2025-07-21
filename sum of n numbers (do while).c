#include <stdio.h>

int main() {
    int i=1, j=0, n;
    //comments is alt shorter way
    //int n;
    
    printf("Enter the number till which u need the sum: ");
    scanf("%d", &n);
    
    do {
        j+=i;
        i++;
    } while (i<=n);
    printf("The sum of the first %d numbers is: %d\n", n, j);
    
    //printf("The sum of the first %d numbers is: %d\n", n, (n*(n+1))/2);
    
    return 0;
}

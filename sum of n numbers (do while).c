#include <stdio.h>

int main() {
    int i=1, j=0, n;
    //comments is alt shorter way
    //int n;
    
    printf("Enter the number till which u need the sum: ");
    scanf("%d", &n);
    
    while (i<=n){
        j+=i;
        i++;
    }
    
    printf("The sum of the first %d numbers is: ", n);
    
    printf("%d\n", j);
    //printf("%d\n", (n*(n+1))/2);
    
    return 0;
}

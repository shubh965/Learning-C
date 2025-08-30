#include <stdio.h>

void greeting();

int main(){
    greeting();
    
    return 0;
}

void greeting(){
    char n='x';
    printf("Enter if u are Indian or French(i/f): ");
    scanf("%c", &n);
    
    if (n=='i'||n=='I'){
        printf("Namaste.");
    }
    else if (n=='f'||n=='F'){
        printf("Banjour.");
    }
    else {
        printf("Please enter a valid input.");
    }
}    

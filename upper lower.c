#include <stdio.h>

int main() {
    char c;
    printf("Enter a character (a-z or A-Z): ");
    scanf(" %c", &c);
    
    if (c>='a' && c<='z') {
        printf("The character is in lower caps.\n");
    } else if (c>='A' && c<='Z') {
        printf("The character is in capital caps.\n");
    } else {
        printf("Please enter a-z or A-Z.\n");
    }

    return 0;
}

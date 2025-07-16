#include <stdio.h>

int main() {
    int age;
    printf("Enter ur age: ");
    scanf("%d", &age);
    
    if(age<18) {
        printf("You are a minor.");
    }
    else {
        printf("You are an adult.");
    }

    return 0;
}

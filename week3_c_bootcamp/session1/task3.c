#include <stdio.h>

int main () {
    int num;
    printf("Enter a number");
    scanf("%d", &num);

    if (num >= 70){
        printf("You have passed with distinction");
    }
    else if (num >= 50){
        printf("You have passed");
    }
    else {
        printf("you have FAILED");
    }
}
#include <stdio.h>

int main () {
    int num;
    printf("Enter a number");
    scanf("%d", &num);

    if (num % 4 == 0 && num % 5 == 0) {
        printf("The number is divisible by both 4 and 5");
    }
    else {
        printf("The number is not divisble by both 4 and 5");
    }
}
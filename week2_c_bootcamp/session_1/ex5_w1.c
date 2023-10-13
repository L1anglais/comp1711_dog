#include <stdio.h>

int main () {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int b;
    printf("Enter a 2nd number: ");
    scanf("%d", &b);

    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d\n", a, b);
}
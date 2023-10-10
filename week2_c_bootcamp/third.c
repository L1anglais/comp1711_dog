#include <stdio.h>

int main () {
    int a;
    int b;
    printf("Insert a number:");
    scanf("%d", &a);
    printf("Insert a number:");
    scanf("%d", &b);
    
    int c = a + b;

    printf("total = %d\n", c);
    return 0;

}

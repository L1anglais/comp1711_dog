#include <stdio.h>

int main () {
    int a = 1;

    while (a <=5) {
        printf("a = %d\n", a);
       // a++;
       a+=1;

    }
    printf("After exiting loop: a = %d\n", a);
    return 0;
}
#include <stdio.h>

int main () {
    int temp;
    scanf("%d", &temp);

    if ( 40 > temp > -10){
        printf("In range");
    }
    else {
        printf("Not in range");
    }
}
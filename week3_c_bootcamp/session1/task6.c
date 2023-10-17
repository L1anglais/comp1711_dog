#include <stdio.h>

int main () {
    int con = 0;
    while (con != -1) {
        printf("Enter a number between 1 and 100\n");
        scanf("%d", &con);
        if (!(100 >= con && con >= 0)){
           printf("Not in range\n");
        }
        
    }
}
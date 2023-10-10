#include <stdio.h>

int main () {
    printf("The maxium bits of a int, float, double, char are as follows:\n");
    printf("%lu\n", sizeof(int));
    printf("%lu\n", sizeof(float));
    printf("%lu\n", sizeof(double));
    printf("%lu\n", sizeof(char));
    return 0;
}
#include <stdio.h>

int main () {
    int a;
    printf("Choose a number between 1 and 5\n");
    scanf("%d", &a);

    switch (a) {
        case 1: printf("You chose 1\n");
        break;
        case 2: printf("You chose 2\n");
        break;
        case 3: printf("You chose 3\n");
        break;
        case 4: printf("You chose 4\n");
        break;
        case 5: printf("You chose 5\n");
        break;
        default: printf("You can't follow instructions\n");
    }

}
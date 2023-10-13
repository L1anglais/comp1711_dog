#include <stdio.h>
#include <math.h>

int main () {
    float radius;
    printf("Enter the radius of a circle: ");
    scanf("%f", &radius);
    float area;
    area = (radius * radius) * M_PI;
    printf("area = %f", area);

}

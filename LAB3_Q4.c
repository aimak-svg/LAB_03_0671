#include <stdio.h>

int main()
{ 
    float base, height, area;

    printf("enter the base of the triangle: ");
    scanf("%f", &base);

    printf("enter the height of the triangle: ");
    scanf("%f", &height);
    area= 0.5*base*height;

    printf("the area of the triangle is %.0f", area);
}

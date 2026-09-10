#include <stdio.h>

int main()
{
    float kilometer;
    float centimeter;
    float meter;
    
    printf("enter distance in kilometers: ");
    scanf("%f", &kilometer);
    meter= kilometer * 1000;
    centimeter= meter * 100;

    printf("the distance in meters is %.0f\n", meter);
    printf("the distance in centimeters is %.0f", centimeter);
}

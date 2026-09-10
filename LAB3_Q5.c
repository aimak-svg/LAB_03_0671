#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("enter the first number: ");
    scanf("%d", &num1);

    printf("enetr the second number: ");
    scanf("%d", &num2);

    num1= num1+num2;
    num2= num1-num2;
    num1= num1-num2;

    printf("num1: %d\n", num1);
    printf("num2: %d", num2);
}
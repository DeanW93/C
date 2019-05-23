
//Program to illustrate errors in a C program.

#include <stdio.h>;

int main()

{
    int num1, num2;
    float num3;
    
    
    num1 = 400;
    num2 = 600;
    num3 = -420.1234;
    
    printf("The value of num1 is %d\n", num1);
    printf("The value of num2 is %d\n", num2);
    printf("The value of num3 is %f\n", num3);
    
    return 0;
    
}
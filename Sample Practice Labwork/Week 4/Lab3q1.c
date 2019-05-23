
#include <stdio.h>

int main()

{
    int num1, num2, num3;
    
    printf("Enter first number\n");
    scanf("%d", &num1);
    
    flushall();
    
    printf("Enter second number\n");
    scanf("%d", &num2);
    
    flushall();
    
    printf("Enter third number\n");
    scanf ("%d", &num3);
    
    flushall();
    
    printf("Your first number was %d\nYour second number was %d\nYour third number was %d", num1, num2, num3);
    
    getchar();
    
    return 0;
    
}
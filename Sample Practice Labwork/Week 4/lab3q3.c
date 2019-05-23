#include <stdio.h>

int main()

{
    float var1, var2, var3;
    
    printf("Enter a decimal number ");
    scanf("%f", &var1);
    
    flushall();
    
    printf("Enter a second decimal number ");
    scanf("%f", &var2);
    
    flushall();
    
    printf("Enter a third decimal number ");
    scanf("%f", &var3);
    
    flushall();
    
    printf("\nThe first number you entered was %.4f", var1);
    //10.4 above allocates 10 spaces for digits and corrects the number to 4 decimal places
    printf("\nThe second number you entered was %.3f", var2);
    printf("\nThe third number you entered was %.0f", var3);
    
    getchar();
    
    return 0;
    
}
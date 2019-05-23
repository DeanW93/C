
#include <stdio.h>

int main ()

{
    int num1, num2, num3;
    float cast, var1;
    
    num1 = 15;
    num2 = 10;
    num3 = 3;
    var1 = 15.0/10;
    
    cast = (float)15/10; 
    
    printf("15 plus 10 is %d\n", num1+num2);
    printf("15 minus 10 is %d\n", num1-num2);
    printf("15 times 10 is %d\n", num1*num2);
    printf("15 divided by 10 is %f\n", var1/num2);
    printf("15 modulus 3 is %d\n", num1%num3);
    
    printf("15 divided by 10 is %f\n", cast); //This is casing, an alternative to the code above for the operation
    
    return 0;
    
}
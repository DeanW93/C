//This programme is to calculate and display the sum of the integers 1 to 5, and displa an average of muliple floats

#include <stdio.h>

int main()

{
    int num1, num2, num3, num4, num5;
    float var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, var11;
    
    num1 = 1;
    num2 = 2;
    num3 = 3;
    num4 = 4;
    num5 = 5;
    
    var1 = 1.0;
    var2 = 1.1;
    var3 = 1.2;
    var4 = 1.3;
    var5 = 1.4;
    var6 = 1.5;
    var7 = 1.6;
    var8 = 1.7;
    var9 = 1.8;
    var10 = 1.9;
    var11 = 2.0;
    
    //Below is the sum of integers 1-5
    printf("The sum of integers 1-5 is %d\n\n", num1+num2+num3+num4+num5);
    
    //Below is the average of the floating-point
    printf("The average of the floating point is %f\n", (var1+var2+var3+var4+var5+var6+var7+var8+var9+var10+var11)/11);
    
    return 0;
    
    
}
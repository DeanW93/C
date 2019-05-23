/*

This Program returns a value from a function. calculates the average of three numbers.

Author: Dean Whelan
Date: 08/02/18

*/

#include<stdio.h>

int avg_check(int, int, int);

int main()
{
    
    int num1, num2, num3;
    int average;
    
    printf("\n\nPlease enter three numbers: ");
    scanf("\n\n%d", &num1);
    scanf("\n%d", &num2);
    scanf("\n%d", &num3);
    flushall();
    
    average = avg_check(num1, num2, num3);
    
    printf("\n\n\tThe average is %d: ", average);
    
    getchar();
    return 0;
    
}//end main

int avg_check(int n1, int n2, int n3)
{
    
    int avg;
    avg = (n1 + n2 + n3)/3;
    
    return avg;
    
}//end 
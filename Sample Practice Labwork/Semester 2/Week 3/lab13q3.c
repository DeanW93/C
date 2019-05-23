/*

This Program returns a value from a function. Checks for highest value entered.

Author: Dean Whelan
Date: 08/02/18

*/

#include<stdio.h>

int max_check(int, int, int);

int main()
{
    
    int num1, num2, num3;
    int highest;
    
    printf("\n\nPlease enter three numbers: ");
    scanf("\n\n%d", &num1);
    scanf("\n%d", &num2);
    scanf("\n%d", &num3);
    flushall();
    
    highest = max_check(num1, num2, num3);
    
    printf("\n\n\tThe highest is %d: ", highest );
    
    getchar();
    return 0;
    
}//end main

int max_check(int n1, int n2, int n3)
{
    int h1;
    
    if(n1 > n2)
    {
        h1 = n1;
    }
    else
    {
        h1 = n2;
    }
    
    if(n3 > h1)
    {
        h1 = n3;
        return h1;
    }
    else
    {
        return h1;
    }

    
}
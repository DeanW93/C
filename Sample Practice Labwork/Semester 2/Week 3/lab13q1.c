/*

This Program returns a value from a function. Checks if a number is even.

Author: Dean Whelan
Date: 08/02/18

*/

#include<stdio.h>

int even_check(int);

int main()
{
    
    int num;
    int result;
    
    printf("\n\n\tPlease enter a number: ");
    scanf("%d", &num);
    flushall();
    
    result = even_check(num);
    
    if(result == 0)
    {
        printf("\n\n\tNumber is even! ");
    }//end if
    else
    {
        printf("\n\n\tNumber is odd! ");
    }//end else
    
    getchar();
    return 0;
    
}//end main

int even_check(int n1)
{
    int r1;
    r1 = n1%2;
    
    return r1;
}//end even_check
/*

This Program implements pass by reference
Author: Dean Whelan
Date: 08/02/18

*/

#include<stdio.h>

void pass(int);

int main()
{
    
    int num = 1;
    
    printf("\n\n\tnum is %d", num);
    
    pass(num);
    
    printf("\n\n\tnum is %d", num);
    
    getchar();
    return 0;
    
}//end main

void pass(int n1)
{
    n1 = n1 + 2;
    printf("\n\n\tn1 is %d", n1);
}
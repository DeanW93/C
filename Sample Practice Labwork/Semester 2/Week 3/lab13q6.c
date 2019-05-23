/*

This Program implements pass by value

Author: Dean Whelan
Date: 08/02/18

*/

#include<stdio.h>

void pass(int*);

int main()
{
    
    int num = 1;
    
    printf("\n\n\tnum is %d", num);
    
    pass(&num);
    
    printf("\n\n\tnum is %d", num);
    
    getchar();
    return 0;
    
}//end main

void pass(int* ptr)
{
    *ptr = *ptr + 2;
    printf("\n\n\t*ptr is %d", *ptr);
}
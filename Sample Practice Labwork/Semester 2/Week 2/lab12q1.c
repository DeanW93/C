/*

This Program uses a function to print 10 stars on a single line.

Author: Dean Whelan
Date: 01/02/2018

*/

#include <stdio.h>

//Prototype

void stars(int);

int main()
{
    int num = 10;
    stars(num);
    
    getchar();
    return 0;
}

void stars(int num)
{
    for(int i=0 ; i<num ; i++)
    {
        printf("*");
    }
    
}


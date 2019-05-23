/*

This Program uses a function to a number of characters on a single line.

Author: Dean Whelan
Date: 01/02/2018

*/

#include <stdio.h>

//Prototype

void stars(int, char);

int main()
{
    int num = 3;
    char str = '*';
    
    stars(num, str);
    
    getchar();
    return 0;
}

void stars(int num, char str)
{
    for(int i=0 ; i<num ; i++)
    {
        printf("%c", str);
    }
    
}
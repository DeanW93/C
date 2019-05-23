/*

This is a program for calloc() use via arrays

Author: Dean Whelan
Date: 25/01/18

*/

#include <stdio.h>
#define SIZE 8

int main()
{
    char chars[SIZE] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'];
    
        
    for(i=0 ; i<SIZE ; i++)
    {
        if(*(chars+i) == ' ')
        {
            chars+i = '_';
        }
    }
    
    
    
    
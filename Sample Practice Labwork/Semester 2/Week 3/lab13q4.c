/*

This Program returns a value from a function, calculates most common character entered.

Author: Dean Whelan
Date: 08/02/18

*/

#include<stdio.h>

char common(char[]);

int main()
{
    
    char characters[3];
    char most_common;
    
    printf("\n\nPlease enter three characters: ");
    scanf("\n\n%d", &characters[0]);
    flushall();
    scanf("\n%d", &characters[1]);
    flushall();
    scanf("\n%d", &characters[2]);
    flushall();
    
    most_common = common(characters);
    
    printf("\n\n\tThe most common character is %c: ", most_common);
    
    getchar();
    return 0;
    
}//end main

char common(char chars[3])
{
    char com;
    
    if(chars[0] == chars[1])
    {
        com = chars[0];
        return com;
    }
    else if(chars[0] == chars[2])
    {
        com = chars[0];
        return com;
    }
    else if(chars[1] == chars[2])
    {
        com = chars[1];
        return com;
    }
        return com;
}
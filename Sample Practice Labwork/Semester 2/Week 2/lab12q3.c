/*

This Program uses a function to find the highest and lowest numbers of three values.

Author: Dean Whelan
Date: 01/02/2018

*/

#include <stdio.h>

//Prototype

void num_sort(int, int, int);

int main()
{
    int num1, num2, num3 = 0;
    num1 = num2 = num3;
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    flushall();
    
    num_sort(num1, num2, num3);
    
    getchar();
    return 0;
}

void num_sort(int num1, int num2, int num3)
{
    int highest;
    int lowest;
    
    //Detect highest integer
    if (num1 > num2)
    {
        highest = num1;
    }
    else
    {
        highest = num2;
    }
    
    if (num3 > highest)
    {
        highest = num3;
    }
    
    //Detect Lowest integer
    if (num1 < num2)
    {
        lowest = num1;
    }
    else
    {
        lowest = num2;
    }
    
    if (num3 < lowest)
    {
        lowest = num3;
    }
    
    //Print values
    
    printf("\n\n\tHighest integer is %d", highest);
    printf("\n\n\tLowest integer is %d", lowest);
    
}
    
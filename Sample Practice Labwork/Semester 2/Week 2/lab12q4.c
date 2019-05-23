/*

This Program uses functions to calculate the average of three integers.

Author: Dean Whelan
Date: 01/02/2018

*/

#include <stdio.h>

//Prototype

void sum(int, int, int);
void average(int);

int main()
{
    int num1, num2, num3 = 0;
    num1 = num2 = num3;
    
    printf("\n\nPlease enter 3 numbers:\n\n");
    
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    flushall();
    
    sum(num1, num2, num3);
    
    getchar();
    return 0;
}

void sum(int num1, int num2, int num3)
{
    int sum = num1 + num2 + num3;
    
    average(sum);
    
}

void average(int sum)
{
    int average;
    
    average = sum/3;
    
    printf("\nThe average of your three values is %d", average);
    
}
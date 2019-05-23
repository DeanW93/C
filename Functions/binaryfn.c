/*

This is a programme which implements a function to convert decimal to binary

*/

#include <stdio.h>
#define SIZE 100

//Prototype
void binary_con(float, float*);

int main()
{
    float decimal;
    float binary[SIZE];
    
    printf("\n\n\tPlease enter a number to be converted from decimal to binary\n\n\tDecimal: ");
    scanf("%f", decimal);
    flushall();
    
    //Print conversion
    for(int i=0; i<SIZE ; i++)
    {
        printf("\n\n\tBinary: %f", binary[i]);
    }
    
    getchar();
    
    return 0;
    
}//end main

//Implement conversion function
void binary_con(float dec)
{
    
    float bin[SIZE];
    
    while(dec != 0)
    {
        for(i=0 ; i<SIZE ; i++)
        {
            *(binary[SIZE]+i) = dec%2
            dec = dec+(dec%2)/2;
            
        }//end for
        
    }//end while
    
    
}//end binary_con
/*

This is a program for calloc()

Author: Dean Whelan
Date: 25/01/18

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no_of_numbers;
    int *ptr;
    int i;
    
    printf("\n\nHow many numbers do you wish to enter?\n");
    scanf("%d", &no_of_numbers);
    flushall();
    
    //Allocate the memory block, calloc() calculates the size of memory block for you
    ptr = (int *)calloc(no_of_numbers, sizeof(int));
    
    //check if memory block is allocated
    if (ptr == NULL)
    {
        printf("\n\nFailed to allocate memory\n");
    }
    else //succesful allocation
    {
        //Enter the numbers into memory block
        printf("Enter your numbers\n");
        
        for(i=0 ; i < no_of_numbers ; i++)
        {
            scanf("%d", &*(ptr+i));
            flushall();
        }
        
        //Display numbers entered
        for(i=0 ; i < no_of_numbers ; i++)
        {
            printf("%d\n", *(ptr+i));
        }
        free(ptr); //Free memory taken by ptr in RAM
    }//end else
    
    getchar();
    return 0;
    
}//end main()
    
    
    
    
    
    
    
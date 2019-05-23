/*

This is a program for calloc() use via arrays

Author: Dean Whelan
Date: 25/01/18

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no_of_numbers;
    int i;
    int *ptr;
    int sum = 0;
    
    printf("\n\n How many numbers do you wish to enter? ");
    scanf("%d", &no_of_numbers);
    flushall();
    
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
        
        //Calculate sum of numbers entered
        for(i=0 ; i < no_of_numbers ; i++)
        {
            sum = sum + *(ptr+i);
        }
        free(ptr); //Free memory taken by ptr in RAM
        
        printf("The sum of integers is %d", sum);
        getchar();
        
    }//end else

    return 0;
    
}//end main()
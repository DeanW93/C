
#include <stdio.h>
#define SIZE 5

int highest_calc(int[]);

int main()
{
    int array[SIZE];
    int i;
    int highest;
    
    printf("Enter 5 integer values below:\n\n");
    
    for(i=0 ; i<SIZE ; i++)
    {
        scanf("%d", &array[i]);
    }
    
    flushall();
    
    highest = highest_calc(array);
    
    printf("The highest number you entered is: %d", highest);
    
    getchar();
    
    return 0;
    
}

//Implement highest_calc()

int highest_calc(int nums[])
{
    int i;
    int highest = nums[0];
    
    for(i=1 ; i<SIZE ; i++)
    {
        if(nums[i] > highest)
        {
            highest = nums[i];
        }//end if
        
    }//end for
    
    return highest;
    
}
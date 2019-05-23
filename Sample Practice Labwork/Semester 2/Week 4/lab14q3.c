
#include <stdio.h>
#define SIZE 5

int average_calc(int[]);

int main()
{
    int array[SIZE];
    int i;
    int average;
    
    printf("Enter 5 integer values below:\n\n");
    
    for(i=0 ; i<SIZE ; i++)
    {
        scanf("%d", &array[i]);
    }
    
    flushall();
    
    average = average_calc(array);
    
    printf("The average of the numbers you entered is: %d", average);
    
    getchar();
    
    return 0;
    
}

//Implement highest_calc()

int average_calc(int nums[])
{
    int i;
    int average = 0;
    
    for(i=0 ; i<SIZE ; i++)
    {
        average = average + nums[i];
    }//end for
    
    average = average/SIZE;
    
    return average;
    
}
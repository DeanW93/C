#include <stdio.h>
#define SIZE 5

int even_odd_calc(int[]);

int main()
{
    int array[SIZE];
    int i;
    int total_even;
    
    printf("Enter 5 integer values below:\n\n");
    
    for(i=0 ; i<SIZE ; i++)
    {
        scanf("%d", &array[i]);
    }
    
    flushall();
    
    total_even = even_odd_calc(array);
    
    printf("\n\nThe total value of the even numbers you entered is: %d", total_even);
    
    getchar();
    
    return 0;
    
}

//Implement highest_calc()

int even_odd_calc(int nums[])
{
    int i;
    int total_even = 0;
    printf("\n");
    
    for(i=0 ; i<SIZE ; i++)
    {
        if((nums[i])%2 == 0)
        {
            printf("\n%d is even", nums[i]);
            total_even = total_even++;
        }
        else
        {
            printf("\n%d is odd", nums[i]);
        }
        
    }//end for
    
    return total_even;
    
}
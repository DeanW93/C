
#include <stdio.h>
#include<conio.h>

#define SIZE 5
#define C_RATE 1.05

int main()
{
    int i;
    
    float euro[SIZE];
    float dollar[SIZE];
    
    printf("Enter 5 euro values: ");
    for(i=0 ; i<SIZE ; i++)
    {
        scanf("%f", &euro[i]);
        flushall();
    }
    
      for(i=0 ; i<SIZE ; i++)
    {
        dollar[i] = euro[i];
    }
    
      for(i=0 ; i<SIZE ; i++)
    {
        dollar[i] = (dollar[i])*(C_RATE);
    }
    
    printf("\nPress enter to continue");
    
      for(i=0 ; i<SIZE ; i++)
    {
        printf("\n|Eur %.2f| |USD %.2f|", euro[i], dollar[i]);
    }
    
    getchar();
    
    return 0;
    
} 
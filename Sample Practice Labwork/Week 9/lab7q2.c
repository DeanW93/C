#include <stdio.h>
#define ROW 3
#define COL 2

int main()
{
    int matrix[ROW][COL];
    int i,j;
    int smallest, largest;
    int sum = 0;
    float avg = 0;
    
    
//input values below
    for( i=0 ; i<ROW ; i++ )
    {
        for( j=0 ; j<COL ; j++)
        {
            printf("\n\n\tEnter a value ");
            scanf("%d", &matrix[i][j]);
            flushall();
        }
    }
        
//output values in a matrix   
    for( i=0 ; i<ROW ; i++ )
    {
        for( j=0 ; j<COL ; j++)
        {
            printf("\t%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    smallest, largest = matrix[0][0];
    
    for( i=0 ; i<ROW ; i++ )
    {
        for( j=0 ; j<COL ; j++)
        {
            if (matrix[i][j]<smallest)
            {
                smallest = matrix[i][j];
            }
            
            if (matrix[i][j] > largest)
            {
                largest = matrix[i][j];
            }
        }
        printf("\n");
    }
   
    
    printf("\n\n\tThe smallest is %d \n", smallest);
    printf("The largest is %d \n", largest);
    printf("The average of values is %d \n", avg); 
    
    
    getchar();
    return 0;
}
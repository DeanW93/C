/*
How to initialize 3x4 Arrays
*/

#include <stdio.h>
#define ROW 3
#define COL 4

int main()
{
    
    int matrix [ROW][COL];
    int matrix2 [ROW][COL];
    int matrix3 [ROW][COL];
    int i, j;
    int count = 0;
    
    
    for(i=0 ; i<ROW ; i++)//Matrix 1
    {
        for(j=0 ; j<COL ; j++)
        {
            matrix[i][j] = count;
            count++;
        }
    }
    
    for(i=0 ; i<ROW ; i++)//Matrix 2
    {
        for(j=0 ; j<COL ; j++)
        {
            matrix2[i][j] = count;
            count++;
        }
    }    
    
    
    for(i=0 ; i<ROW ; i++)//Matrix3
    {
        for(j=0 ; j<COL ; j++)
        {
            matrix3[i][j] = matrix[i][j] * matrix2[i][j];
        }
    }
    
    
    for(i=0 ; i<ROW ; i++)//Print Matrix3
    {
        for(j=0 ; j<COL ; j++)
        {
            printf("%d, ", matrix3[i][j]);
        }
        printf("\n");
    }
    
    getchar();
    
    return 0;
    
}//end main
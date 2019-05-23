

#include <stdio.h>

//prototype

void area_sq(float*, float*);

void area_ci(float*, float*);

int main()
{
    
    float radius, length;
    float area_circle, area_square;
    
    printf("\nEnter the value for the length of your square: ");
    scanf("%f", &length);
    flushall();
    
    printf("\nEnter the value for the radius of your circle: ");
    scanf("%f", &radius);
    flushall();
    
    area_sq(&length, &area_square);
    area_ci(&radius, &area_circle);
    
    printf("\n\nThe area of the square is: %f", area_square);
    printf("\nThe area of the square is: %f", area_circle);
    
    getchar();
    
    return 0;
    
}

//implement area_sq()

void area_sq(float *lengthsq, float *area)
{
    *area = (*lengthsq)*(*lengthsq);
}

//implement area_ci()

void area_ci(float *radiusci, float *area)
{
    float pi = 3.14;
    
    *area = (pi)*(*radiusci)*(*radiusci);
    
}
    
    
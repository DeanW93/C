//This programme is to observe the results of using the incorrect delimiters.

#include <stdio.h>

int main()

{
    int first;
    float second;
    char third;
    
    first = 10;
    second = 20.12345;
    third = 'b';
    
    //I use the wrong delimiter here to see how it compiles
    printf("The value of first is %d\n", first);
    printf("The value of second is %f\n", second);
    printf("The value of third is %d\n", third);
    
    return 0;
    
}

#include <stdio.h>

int main ()

{
    int num1, num2, num3, num4;
    
    printf("Enter 4 numbers\n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    
    flushall();
    
    printf("Your four numbers in reverse order are %d, %d, %d and %d", num4, num3, num2, num1);
    
    getchar();
    return 0;
}
    
    
    
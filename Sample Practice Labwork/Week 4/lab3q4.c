
#include <stdio.h>

int main()

{
    char ch1, ch2, ch3;
    
    printf("Enter first character ");
    ch1 = getchar();
    
    flushall();
    
    printf("\nEnter second character ");
    ch2 = getchar();
    
    flushall();
    
    printf("\nEnter third character ");
    ch3 = getchar();
    
    flushall();
    
    printf("\nThe first character you entered was ");
    putchar(ch1);
    
    printf("\nThe second character you entered was ");
    putchar(ch2);
    
    printf("\nThe third character you entered was ");
    putchar(ch3);
    
    getchar();
    
    return 0;
    
}
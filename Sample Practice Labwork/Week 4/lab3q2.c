#include <stdio.h>

int main()

{
    char ch1, ch2;
    
    printf("Enter your first character\n");
    ch1 = getchar();
    
    flushall();
    
    printf("Enter your second character\n");
    ch2 = getchar();
    
    flushall();
    
    printf("Your first character was %c\n", ch1);
    printf("Your second character was %c\n", ch2);
    
    
    getchar();
    
    return 0;
    
}
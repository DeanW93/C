#include <stdio.h>

int main()

{
    
    printf("2 modulus 2 is %d", 2%2);
    printf("3 modulus 2 is %d", 3%2);
    printf("5 modulus 2 is %d", 5%2);
    printf("7 modulus 3 is %d", 7%3);
    printf("100 modulus 33 is %d", 100%33);
    printf("100 modulus 7 is %d", 100%7);
    
    //using "%" in the quotes above is a bug, eg: printf("2%2 is %d", 2%2);  --> This does not work
    
    return 0;
    
}
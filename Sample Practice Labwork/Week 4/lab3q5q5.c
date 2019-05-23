
#include <stdio.h>

int main()

{
    int age, num1, num2;
    
    age=0;
    num1=75;
    num2=525600;
    
    printf("What is your age? ");
    scanf("%d", &age);
    flushall();
    
    /*Your heart beats 75 times per minute. There are 525600 minutes in one year. User inputs their age.
            */
    
    printf("\n\nYour heart beats roughly %d times to date in your lifetime", age*num1*num2);
    
    getchar();
    
    return 0;
    
}
    
    
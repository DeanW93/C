/*This program detects odd numbers entered between 1 and 100
*/
#include <stdio.h>

int main()

{
    int number;
    number =0;
    
    printf("\nEnter a whole number between 1 and 100 ");
    scanf("%d", &number);


    while(number<1 || number>100)
    {
        printf("\n\nThe number you entered must be between 0 and 100, please try again ");
        scanf("%d", &number);
    }

    
    if (number%2==0)
    {
        printf("\n\nThe number you have entered is even\n");
    }
    
    else
    {
        printf("\n\nThe number you have entered is odd");
    }
    
    getchar();
    getchar();
    
    return 0;
    
}
    
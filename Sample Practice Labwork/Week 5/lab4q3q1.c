//Lab 4 rewritten code for learning purposes

#include <stdio.h>

int main()

{
    char marriage_status = 'a';
    
    switch(marriage_status)
    {
        case 'S':
        {
            printf("single");
        }
        
        case 'M':
        {
            printf("Married");
        }
        
        case 'W':
        {
            printf("Widowed");
        }
        
        case 'E':
        {
            printf("Separated");
        }
        
        case 'D':
        {
            printf("Divorced");
        }
        
        default:
        {
            printf("error:invalid code");
        }
    }    
    
    getchar();
    return 0;
        
}
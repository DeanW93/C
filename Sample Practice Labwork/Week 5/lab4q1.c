/*This programme demonstrates the use of a switch statement
*/
#include <stdio.h>

int main ()

{
    char letter;
    letter = ' ';
    
    printf("\nPlease enter a character from the keyboard: ");
    scanf("%c", &letter);
    
    switch(letter)
    {
        case 'a':
        {
            printf("\nThis character is a vowel\n\n");
            break;
        }
        
        case 'e':
        {
            printf("\nThis character is a vowel\n\n");
            break;
        }
        
        case 'i':
        {
            printf("\nThis character is a vowel\n\n");
            break;
        }
        
        case 'o':
        {
            printf("\nThis character is a vowel\n\n");
            break;
        }
        
        case 'u':
        {
            printf("\nThis character is a vowel\n\n");
            break;
        }
        
        default:
        {
            printf("\nThis character is not a vowel ");
        }//end case
        
    }//end switch
    
    getchar();
    getchar();
    return 0;
    
}//end main
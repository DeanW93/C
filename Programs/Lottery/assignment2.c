/*

Author: Dean Whelan
Date:

This Program runs a lottery game. The user may enter and sort 6 numbers in an attempt to match the winning numbers.
The user may use the program to check their results and see what prizes they may have won. 

The program will track the statistics of how many times each number is entered during runtime and the user can review this.
The user may access all of the above features using a built in menu and may exit the program through this menu anytime they wish.


*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define SIZE 6
#define F_SIZE 43

/*

Lottery Menu Prototypes

*/

void enter_num(int[], int[]);           //Option 1
void display_num(int[]);                //Option 2
void sort_num(int[]);                   //Option 3
void check_results(int[], int[], int);  //Option 4
void frequency(int[]);                  //Option 5
int exit_function(void);                //Option 6

/*

Sorting prototype

*/

int cmpfunc (const void * a, const void * b);



int main()
{
    
    int menu = 0;                                  //Menu selection Variable
    int i;                                         //Index Variable
    int user_num[SIZE];                            //Users numbers
    int winning[SIZE] = {1, 3, 5, 7, 9, 11};       //Winning numbers
    int bonus = 42;                                //Bonus number
    
    /* 
        
        This array displays how many times each number has been entered by the user.
    
        Array freq[] below counts the amount of times a number is entered by referencing the 
        Nth element as the number entered by the user. The element is then incremented by one. The program may 
        later print the array values and reference the relevant element as the number entered using the index variable. 
    
        */
    int freq[F_SIZE];
    
    
    for(i=0 ; i<F_SIZE ; i++)//initialises number counter array with 0s. These elements will be incremented as the relevant values are entered.
    {
        *(freq+i) = 0;
    }
    
    while(menu != 6)//Runs the menu continuously until the user exits the program.
    {
        menu = 0;
        clrscr();
        
        printf("\n\t\t\tWELCOME TO THE LOTTERY GAME");
        printf("\n\n\t\t1) Enter my numbers");
        printf("\n\n\t\t2) Display my numbers");
        printf("\n\n\t\t3) Sort my numbers");
        printf("\n\n\t\t4) Check results");
        printf("\n\n\t\t5) Display number input frquency");
        printf("\n\n\t\t6) Exit the program.\n\n\n\n\t\tPlease select an option from the above menu: ");
    
        scanf("%d", &menu);
        flushall();
    
        switch(menu)//Implements the menu options
        {
            case 1://User enters 6 numbers
            {
                enter_num(user_num, freq);
                break;
            }
        
            case 2://Display numbers entered by the user
            {
                display_num(user_num);
                break;
            }
        
            case 3://Sorts the numbers in ascending order and prints the sorted array for the user
            {
                qsort(user_num, SIZE, sizeof(int), cmpfunc);
                printf("Your sorted numbers are: ");
                display_num(user_num);
                break;
            }
        
            case 4://Checks the users numbers agains the winning numbers and displays prizes when won or lost.
            {
                check_results(user_num, winning, bonus);
                break;
            }
        
            case 5://Displays an array which shows how many times each number the user has entered at least one has been entered.
            {
                frequency(freq);
                break;
            }
        
            case 6://Terminates the program
            {
                break;
            }
        
            default://Error check
            {
                clrscr();
                printf("\n\n\tERROR: Please enter a value corresponding to the main menu. Press enter to try again.");
                getchar();
                break;
            }
        
        }//end switch
    
    }//end while
    
    return 0;
    
}

/*

Implement Menu Functions Below

*/

void enter_num(int user_num[], int freq[])//Stores user entries, updates statistics
{
    int i, j, index;
    bool duplicate = false;//Currently no duplicate entries while this is false
    
    clrscr();

    for(i=0 ; i<SIZE ; i++)//Stores user entries in user_num
    {
        clrscr();
        printf("\n\n\tEnter number %d: ", (i+1));
        scanf("%d", &*(user_num+i));
        flushall();
    
        for(j=0 ; j<i ; j++)//Checks entries for duplicates using an if/else
        {
           if(*(user_num+i) == *(user_num+j))//Error checking
            {
                printf("ERROR: You have entered a duplicate number please press enter and try again");
                getchar();
                i--;
                duplicate=true;
            }
            else
            {
                duplicate=false;
            }//end if/else
            
        }//end for
        if(duplicate==false)//Proceeds to increment counter for frequency array
        {
            if(*(user_num+i) >= 1 && *(user_num+i) <= 42)//Error checking, number must be between 1 and 42 inclusive
            {
                index = *(user_num+i);
                *(freq+index)=*(freq+index)+1;
            }
            else
            {
                clrscr();
                printf("\n\n\tERROR: Please enter a value between 1 and 42 inclusive. Press enter to start again.");
                getchar();
            }//end if/else
            
        }//end if
        
    }//end for
    
}//end enter_num()


void display_num(int user_num[])//displays users selected numbers
{
    
    clrscr();
    int i;
    printf("\n\nYour numbers are currently: ");
    
    
    for(i=0 ; i<SIZE ; i++)//display users numbers
    {
        printf("|%d| ", *(user_num+i));
    }//end for
    
    printf("\n\nPress enter to return to main menu"); 
    
    getchar();
    
}//end display_num()


void check_results(int user[], int winning[], int bnum)
{
    int i, j;
    int score = 0;
    int bonus = 0;
    clrscr();
    
    for( i=0 ; i<SIZE ; i++)//Nested loop checks each number entered against each winning number
    {
        for( j=0 ; j<SIZE ; j++)
        {
            if(*(user+i) == *(winning+j))
            {
                score++;
            }//end if
            
        }//end for
        
        if(*(user+i) == bnum)//Bonus number is checked seperately here
        {
            bonus = 1;
            score++;
        }//end if
        
    }//end for
    

    
    switch(score)//Prints prizes won based on score, also depending on bonus number being matched.
    {
        case 3:
        {
            if(bonus == 1)//Score is 3, bonus is matched
            {
                printf("\n\n\tCONGRATULATIONS! You have won a cinema ticket!");
            }
            else
            {
                printf("\n\n\tSORRY! You have not won a prize today!");
            }
            break;
        }
        
        case 4:
        {
            if(bonus == 1)//Score is 4, bonus is matched
            {
                printf("\n\n\tCONGRATULATIONS! You have won a WEEKEND AWAY!");
            }
            else
            {
                printf("\n\n\tCONGRATULATIONS! You have won a NIGHT OUT!");
            }
            break;
        }
        
        case 5:
        {
            if(bonus == 1)//Score is 5, bonus is matched
            {
                printf("\n\n\tCONGRATULATIONS! You have won a NEW CAR!");
            }
            else
            {
                printf("\n\n\tCONGRATULATIONS! You have won a HOLIDAY!");
            }
            break;
        }
        
        case 6://Score is 6, bonus is matched
        {
            printf("\n\n\tCONGRATULATIONS! You have won a JACKPOT PRIZE!!");
            break;
        }
        
        default:
        {
            printf("\n\n\tSORRY! You have not won a prize today!");
            break;
        }
        
    }
    
    getchar();
}

void frequency(int array[])
{
    int i;
    clrscr();
    for(i=0 ; i<F_SIZE ; i++)//Prints frequency array, displays how many times each number was entered by the user during runtime
    {
         
        if(*(array+i) > 0)
        {
           printf("\nThe number %d has been entered %d times", i, array[i]);
        }//end if
        
    }//end for
    
    getchar();
    
}//end frequency()


/*

Implement sorting functions below

*/

int cmpfunc (const void * a, const void * b)//Function necessary for implementation of the built in quicksort function from <stdlib.h>
{
   return ( *(int*)a - *(int*)b );
}//end cmpfunc()






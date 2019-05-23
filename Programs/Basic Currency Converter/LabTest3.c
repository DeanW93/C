/*
Compiler: Borlands
Author: Dean Whelan
Student number: C17778651


*/

#include<stdio.h>
#include<conio.h>
#define SIZE 3


//prototype
float change_to_Euro(float[]);//converts Dollar to Euro
float change_to_Dollar(float[]);//converts Euro to Dollar


int main()
{
    
    int menu = 0;
    float average;
    float array[SIZE];
    
   
    while(menu!=3)
    {
        /* MENU
                */
        printf("\n\n\tPlease select a currency from the menu: ");
    
        printf("\n\n\t1) Euro");
        printf("\n\n\t2) US Dollar");
        printf("\n\n\t3) Exit\n\n\t");
    
        scanf("%d", &menu);
        flushall();
    
        clrscr();
    
    
    
        switch(menu)
        {
            case 1://Euro to Dollar
            {
                printf("\n\nPlease enter three values: ");
                for(int i=0; i<SIZE ; i++)
                {
                    scanf("%f", &array[i]);
                    flushall();
                }
                average = change_to_Dollar(array);
                
            }
        
            case 2://Dollar to Euro
            {
                printf("\n\nPlease enter three values: ");
                for(int i=0; i<SIZE ; i++)
                {
                    scanf("%f", &array[i]);
                    flushall();
                }
                average = change_to_Euro(array);
            }
            
            case 3:
            {
                break;
            }
        
            default:
            {
                printf("\n\n\tError: Please slect an option from the menu given.");
                break;
            }
        
        }//end switch
        
    }//end while 
        
    printf("\n\n\tThe average of your converted currencies is: %f\n\n\tEnter any key to terminate the program.", average);
    
    getchar();
    return 0;
    
}//end main


//Implement functions

float change_to_Dollar(float array[])
{
    float total = 0;
    float average;
    int i;
    
    printf("\n\n\tYour values will now be displayed in Dollars:\n");
    
    
    for(i=0 ; i<SIZE ; i++)
    {
        array[i] = (array[i])*(1.19);
        printf("\n\t%f", array[i]);
        total = total + array[i];
    }
    
    average = total/SIZE;
    
    return average;
}


float change_to_Euro(float array[])
{
    float total = 0;
    float average;
    int i;
    
    printf("\n\n\tYour values will now be displayed in Euro:\n");
    
    
    for(i=0 ; i<SIZE ; i++)
    {
        array[i] = (array[i])*(0.84);
        printf("\n\t%f", array[i]);
        total = total + array[i];
    }
    
    average = total/SIZE;
    
    return average;
}

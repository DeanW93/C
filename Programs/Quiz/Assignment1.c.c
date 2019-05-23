/*This program simulates a mathematics quiz game

Author: Dean Whelan
Date: 24th October
Version: 1.0

*/

#include <stdio.h>
#include <conio.h>

int main ()
{
    int menu = 0;
    int num = 0;//number of questions to be asked
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int correct = 0;
    int incorrect = 0;
    
    
    /* The code below displays the menu
        */
    do
    {
        printf("\n\n\t\tWelcome to Math Quiz!\n\n\tPlease choose from the following options:\n\n");
        printf("\t1) How many questions would you like to be asked? \n");
        printf("\t2) Begin Quiz \n");
        printf("\t3) Display Round Results \n");
        printf("\t4) Exit Program \n\n\n");
        printf("\n\tREMEMBER: You must specify a number of questions to be asked before starting your quiz!\n\t          You must specify between 1 and 5 using option 1!\n\n");
        printf("\tSelect an option from the menu and press enter to continue ");
        scanf("%d", &menu);//User Input: Menu selection
        flushall();
    
        switch(menu)
        {
            case 1: //Option 1: User specifies number of questions to be asked
            {
                num = 0;
                clrscr();
                printf("\n\n\tPlease specify the number of questions you wish to be asked! ");
                scanf("%d", &num);
                flushall();
                
                if(num != 1 && num != 2 && num != 3 && num != 4 && num != 5)
                {
                    clrscr();
                    printf("\n\n\tError! Please specify between 1 and 5 questions to be asked!\n\n\tPress enter to return to the main menu and try again...");
                    getchar();
                }
                else if(num <= 5 && num >= 1)//ensures the user specifies a number of questions within the required range
                {
                    clrscr();
                    printf("\n\n\tThank you! You have specified %d question(s) to be asked during your quiz! Press enter\n\tto return to the main menu. There, you can begin your quiz!", num);
                    getchar();
                }
                else
                {
                    clrscr();
                    printf("\n\n\tError! Please specify between 1 and 5 questions to be asked!\n\n\tPress enter to return to the main menu and try again...");
                    num = 0;
                    getchar();
                }
                
                clrscr();
                
                menu = 0;
                
                break;
            }//end case (OPTION 1)
        
            case 2: //Option 2: Starts the quiz, prints questions and user inputs answers.
            {
                clrscr();
                correct = 0;
                incorrect = 0;
                if(num!=0)//Checks that the user has specified a number of questions to be asked
                {
                    printf("\n\n\tLets begin! you have requested %d question(s)! Good luck!");
                    for(i = 0 ; i <= num-1 ; i++)//generates the questions sequentially
                    {
                        switch(i)
                        {
                            case 0://Generates Question and checks answer
                            {
                                printf("\n\n\t2 + 2 = ");
                                scanf("%d", &ans1);
                                flushall();
                            
                                if(ans1==4)//Checks if correct and displays correct answer
                                {
                                    printf("\tCorrect! Answer: 4 ");
                                    correct = correct+1;
                                }
                                else
                                {
                                    printf("\tIncorrect! Answer: 4");
                                    incorrect = incorrect+1;
                                }
                            
                                if(num==1)//Ensures the Quiz terminates if the relevant number of questions is specified
                                {
                                    printf("\n\n\tThanks for playing! Use the menu to display your round results! Press enter to continue...");
                                    getchar();
                                    clrscr();
                                }
                            
                                break;
                            }//end case
                    
                            case 1://Generates Question and checks answer
                            {
                                printf("\n\n\t4 - 1 = ");
                                scanf("%d", &ans2);
                                flushall();
                            
                                if(ans2==3)//Checks if correct and displays correct answer
                                {
                                    printf("\tCorrect! Answer: 3 ");
                                    correct = correct+1;
                                }
                                else
                                {
                                    printf("\tIncorrect! Answer: 3");
                                    incorrect = incorrect+1;
                                }
                            
                                if(num==2)//Ensures the Quiz terminates if the relevant number of questions is specified
                                {
                                    printf("\n\n\tThanks for playing! Use the menu to display your round results! Press enter to continue...");
                                    getchar();
                                    clrscr();
                                }
                            
                                break;
                            }//end case
                    
                            case 2://Generates Question and checks answer
                            {
                                printf("\n\n\t3 x 4 = ");
                                scanf("%d", &ans3);
                                flushall();
                            
                                if(ans3==12)//Checks if correct and displays correct answer
                                {
                                    printf("\tCorrect! Answer: 12 ");
                                    correct = correct+1;
                                }
                                else
                                {
                                    printf("\tIncorrect! Answer: 12");
                                    incorrect = incorrect+1;
                                }
                            
                                if(num==3)//Ensures the Quiz terminates if the relevant number of questions is specified
                                {
                                    printf("\n\n\tThanks for playing! Use the menu to display your round results! Press enter to continue...");
                                    getchar();
                                    clrscr();
                                }
                            
                                break;
                            }//end case
                    
                            case 3://Generates Question and checks answer
                            {
                                printf("\n\n\t15 / 3 = ");
                                scanf("%d", &ans4);
                                flushall();
                            
                                if(ans4==5)//Checks if correct and displays correct answer
                                {
                                    printf("\tCorrect! Answer: 5 ");
                                    correct = correct+1;
                                }
                                else
                                {
                                    printf("\tIncorrect! Answer: 5");
                                    incorrect = incorrect+1;
                                }
                            
                                if(num==4)//Ensures the Quiz terminates if the relevant number of questions is specified
                                {
                                    printf("\n\n\tThanks for playing! Use the menu to display your round results! Press enter to continue...");
                                    getchar();
                                    clrscr();
                                }
                            
                                break;
                            }//end case
                    
                            case 4://Generates Question and checks answer
                            {
                                printf("\n\n\t9 x 10 = ");
                                scanf("%d", &ans5);
                                flushall();
                            
                                if(ans5==90)//Checks if correct and displays correct answer
                                {
                                    printf("\tCorrect! Answer: 90 ");
                                    correct = correct+1;
                                }
                                else
                                {
                                    printf("\tIncorrect! Answer: 90");
                                    incorrect = incorrect+1;
                                }
                            
                                if(num==5)//Ensures the Quiz terminates if the relevant number of questions is specified
                                {
                                    printf("\n\n\tThanks for playing! Use the menu to display your round results! Press enter to continue...");
                                    getchar();
                                    clrscr();
                                }
                            
                                break;
                            }//end case
                        
                            case 5://Generates Question and checks answer
                            {
                                printf("\n\n\tThanks for playing! Use the menu to display your round results! Press enter to continue...");
                                getchar();
                                clrscr();
                                break;
                            }//end case
                            
                    
                            default:
                            {
                                printf("\n\n\tError: Ensure to specify between 1 and 5 questions to be asked using option 1,");
                                printf("\n\n\tthen try this feature again! Press any key to return to the main menu... ");
                                getchar();
                                break;
                            }//end case
                        
                        }//end nested switch
                        
                    }//end for loop
                    
                }
                else
                {
                    clrscr();
                    printf("\n\n\tError: Please use the menu to specify a number of questions to be asked before starting the quiz!\n\n\tPress enter to return to the main menu...");
                    getchar();
                    clrscr();
                    
                }//end if else statement
                
                menu = 0;
                
                break;
            }//end case (OPTION 2)
        
            case 3://Option 3: Displays number of questions answered correctly/incorrectly
            {
                if(i>0)//Ensures the user cannot access this feature until they have completed a quiz
                {
                    clrscr();
                    printf("\n\n\tPlease find your round results below!");
                    printf("\n\n\tYou answered %d question(s) correctly.", correct);
                    printf("\n\tYou answered %d question(s) incorrectly.", incorrect);
                    printf("\n\n\tPress enter to return to the main menu...");
                    getchar();
                    clrscr();
                    
                    menu = 0;
    
                    break;
                }
                else
                {
                    clrscr();
                    printf("\n\n\tError: Please take a quiz before checking for results! Press enter to return to the main menu...");
                    getchar();
                    clrscr();
                    
                    menu = 0;
                    
                    break;
                }
            }//end case (OPTION 3)
            
            case 4://Option 4: selecting this option will terminate the program. it is included to avoid 4 falling under the default category
            {
                break;
            }//end case (OPTION 4)
        
            default:
            {
                clrscr();
                printf("\n\n\tError: Incorrect input. You must enter a value between 1 and 4. Press enter to return to the main menu... ");
                getchar();
                clrscr();
                break;
            }
    
        }//end switch
    }
    while(menu != 4);//end do-while menu display
        
    printf("\n\n\tThanks for using MathQuiz! Press enter to close the program...");
        
    getchar();
    return 0;
    
}//end main

    
//
//  main.c
//  GitMidTest
//
//  Created by Rosen, Aidan on 9/19/19.
//  Copyright © 2019 Rosen, Aidan. All rights reserved.
//

#include <stdio.h>
#include "questions.h"
#include "questionDriver.h"

int main() {
    
    // protoype for internal functions
    void prepareConsole(void);
    void intromessage(void);
    int choice;
    struct values dTypes; dTypes.score = 0; dTypes.questions = 0; //data types score and questions
    struct values bi; bi.score = 0; bi.questions = 0;
    struct values op; op.score = 0; op.questions = 0;
    struct values rand; rand.score = 0; rand.questions = 0;
    struct values comp; comp.score = 0; comp.questions = 0;
    struct values git; git.score = 0; git.questions = 0;
    struct values struc; struc.score = 0; struc.questions = 0;
    struct values loop; loop.score = 0; loop.questions = 0;
        // start with fresh console
        prepareConsole();
        
        // welcome message
        intromessage();
        
        while (1 == 1) {
            // menu starts here
            printf("----------------------------------------- \n");
            printf(" |                MENU                 |  \n");
            printf("----------------------------------------- \n");
            printf("| [1] Fundamental Data Types            %d out of %d|\n", dTypes.score, dTypes.questions);
            printf("| [2] Binary                            |\n");
            printf("| [3] Random Logic                      |\n");
            printf("| [4] GitHub                            |\n");
            printf("| [5] Structures                        |\n");
            printf("| [6] Expressions                       |\n");
            printf("|                                       |\n");
            printf("|                                       |\n");
            printf("|                                       |\n");
            printf("| [0] Exit                              |\n");
            printf("|                                       |\n");
            printf("-----------------------------------------\n");
            printf("\n\n");
            
            // assigns choice of question to variable
            printf("Question Number: ");
            scanf("%d", &choice);
            
            switch (choice) { //remember, in the question driver, you need to have the section number first (outlined in the driver file) and the number of questions
                case 1:
                    dTypes = qDriver(1, 2); //defaulted to 1, change according to # of q's
                    break;
                case 2:
                    dTypes = qDriver(2, 1);
                    break;
                case 3:
                    dTypes = qDriver(3, 1);
                    break;
                case 4:
                    dTypes = qDriver(4, 1);
                    break;
                case 5:
                    dTypes = qDriver(5, 1);
                    break;
                case 6:
                    dTypes = qDriver(6, 1);
                    break;
                case 0:
                    printf("Quitting...\n");
                    return 0;
                default:
                    printf("I'm sorry. That is an invaid input. Please try again.\n");
                    break;
            }
        }
        
    }
    
    // put logic to prepare console in here
    void prepareConsole(void)
    {
        printf("\033"); // clear console
    }
    
    void intromessage()
    {
        printf("Welcome to the Computer Science Period 5 Midterm.\n");
        printf("Choose the question you would like to start with first. Do not repeat questions.\n");
        printf("Answer the following questions to the best of your ability. Good Luck!\n\n");
    }

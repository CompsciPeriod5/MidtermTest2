//
//  main.c
//  GitMidTest
//
//  Created by Rosen, Aidan on 9/19/19.
//  Copyright © 2019 Rosen, Aidan. All rights reserved.
//

#include <stdio.h>
#include "questionDriver.h"

int main() {
    
    // protoype for internal functions
    void prepareConsole(void);
    void intromessage(void);
    int choice;
    struct values dTypes; dTypes.score = 0; dTypes.questions = 0; //data types score and questions
        // start with fresh console
        prepareConsole();
        
        // welcome message
        intromessage();
        
        while (1 == 1) {
            // menu starts here
            printf("----------------------------------------- \n");
            printf(" |                MENU                 |  \n");
            printf("----------------------------------------- \n");
            printf("| [0] Math            %d out of %d|\n", dTypes.score, dTypes.questions);
            printf("| [1] Binary                            |\n");
            printf("| [2] Assignment                        |\n");
            printf("| [3] Expressions                       |\n");
            printf("| [4] Logic and Negation                |\n");
            printf("| [5] Datatypes                         |\n");
            printf("|                                       |\n");
            printf("|                                       |\n");
            printf("|                                       |\n");
            printf("|                                       |\n");
            printf("|                                       |\n");
            printf("|                                       |\n");
            printf("| [99] Exit                              |\n");
            printf("|                                       |\n");
            printf("----------------------------------------- \n");
            printf("\n\n");
            
            // assigns choice of question to variable
            printf("Question Number: ");
            scanf("%d", &choice);
            
            switch (choice) {
                case 0:
                    dTypes = qDriver(0);
                    break;
                case 1:
                    dTypes = qDriver(1);
                    break;
                case 2:
                    dTypes = qDriver(2);
                    break;
                case 3:
                    dTypes = qDriver(3);
                    break;
                case 4:
                    dTypes = qDriver(4);
                    break;
                case 5:
                    dTypes = qDriver(5);
                    break;
                case 99:
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

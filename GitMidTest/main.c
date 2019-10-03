//
//  main.c
//  GitMidTest
//
//  Created by Rosen, Aidan on 9/19/19.
//  Copyright © 2019 Rosen, Aidan. All rights reserved.
//

#include <stdio.h>
#include "Questions.h"
int main() {
    
    // protoype for internal functions
    void prepareConsole(void);
    void intromessage(void);
    int choice;
        // start with fresh console
        prepareConsole();
        
        // welcome message
        intromessage();
        
        while (1 == 1) {
            // menu starts here
            printf("----------------------------------------- \n");
            printf(" |                MENU                 |  \n");
            printf("----------------------------------------- \n");
            printf("| [1] Structure Question                |\n");
            printf("| [2] Control Flow Operator Question    |\n");
            printf("| [3] Data Types Question               |\n");
            printf("| [4] Product Owner Question            |\n");
            printf("| [5] GitHub Question                   |\n");
            printf("|                                       |\n");
            printf("|                                       |\n");
            printf("|                                       |\n");
            printf("|                                       |\n");
            printf("|                                       |\n");
            printf("|                                       |\n");
            printf("|                                       |\n");
            printf("| [0] Exit                              |\n");
            printf("|                                       |\n");
            printf("----------------------------------------- \n");
            printf("\n\n");
            
            // assigns choice of question to variable
            printf("Question Number: ");
            scanf("%d", &choice);
            
            switch (choice) {
                case 1:
                    structQuestion();
                    break;
                case 2:
                    cfop();
                    cfop2();
                    break;
                case 3:
                    datatypesQuestions();
                    break;
                case 4:
                    questionPO();
                    break;
                case 5:
                    questionOne();
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

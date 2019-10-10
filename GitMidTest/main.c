//
//  main.c
//  GitMidTest
//
//  Created by CompSciPer5 on 9/19/19.
//  Copyright © 2019 CompSciPer5. All rights reserved.
//

#include <stdio.h>
#include "unistd.h"
#include "questions.h"
#include "questionDriver.h"

int main() {
    
    // protoype for internal functions
    void prepareConsole(void);
    void intromessage(void);
    int choice;
    int totalscore;
    int flagdtypes = 0;
    int flagbi = 0;
    int flagrand = 0;
    int flaggit = 0;
    int flagstruc = 0 ;
    int flagexp = 0;
    struct values dTypes; dTypes.score = 0; dTypes.questions = 0; //data types score and questions
    struct values bi; bi.score = 0; bi.questions = 0;
    struct values rand; rand.score = 0; rand.questions = 0;
    struct values git; git.score = 0; git.questions = 0;
    struct values struc; struc.score = 0; struc.questions = 0;
    struct values exp; exp.score = 0; exp.questions = 0;
        // start with fresh console
        prepareConsole();
        
        // welcome message
        intromessage();
        
        while (1 == 1) {
            // menu starts here
            printf("----------------------------------------------------- \n");
            printf(" |                       MENU                       |  \n");
            printf("----------------------------------------------------- \n");
            printf("| [1] Fundamental Data Types            %d out of %d|\n", dTypes.score, dTypes.questions);
            printf("| [2] Binary                            %d out of %d|\n", bi.score, bi.questions);
            printf("| [3] Random Logic                      %d out of %d|\n", rand.score, rand.questions);
            printf("| [4] GitHub                            %d out of %d|\n", git.score, git.questions);
            printf("| [5] Structures                        %d out of %d|\n", struc.score, struc.questions);
            printf("| [6] Expressions                       %d out of %d|\n", exp.score, exp.questions);
            printf("|                                                   |\n");
            printf("|                                                   |\n");
            printf("|                                                   |\n");
            printf("| [0] Exit                                          |\n");
            printf("|                                                   |\n");
            printf("-----------------------------------------------------\n");
            printf("\n\n");
            
            // assigns choice of question to variable
            printf("Question Number: ");
            scanf("%d", &choice);
            
            switch (choice) { //remember, in the question driver, you need to have the section number first (outlined in the driver file) and the number of questions
                case 1:
                    if (flagdtypes == 1) {
                        printf("\nSorry, you cannot repeat questions\n");
                        usleep(1000000);
                        break;
                    }
                    dTypes = qDriver(1, 2); //defaulted to 1, change according to # of q's
                    flagdtypes = 1;
                    break;
                case 2:
                    if (flagbi == 1) {
                        printf("\nSorry, you cannot repeat questions\n");
                        usleep(1000000);
                        break;
                    }
                    bi = qDriver(2, 3);
                    flagbi = 1;
                    break;
                case 3:
                    if (flagrand == 1) {
                        printf("\nSorry, you cannot repeat questions\n");
                        usleep(1000000);
                        break;
                    }
                    rand = qDriver(3, 3);
                    flagrand = 1;
                    break;
                case 4:
                    if (flaggit == 1) {
                        printf("\nSorry, you cannot repeat questions\n");
                        usleep(1000000);
                        break;
                    }
                    git = qDriver(4, 1);
                    flaggit = 1;
                    break;
                case 5:
                    if (flagstruc == 1) {
                        printf("\nSorry, you cannot repeat questions\n");
                        usleep(1000000);
                        break;
                    }
                    struc = qDriver(5, 1);
                    flagstruc = 1;
                    break;
                case 6:
                    if (flagexp == 1) {
                        printf("\nSorry, you cannot repeat questions\n");
                        usleep(1000000);
                        break;
                    }
                    exp = qDriver(6, 3);
                    flagexp = 1;
                    break;
                case 0:
                    totalscore = dTypes.score + bi.score + rand.score + git.score + struc.score + exp.score;
                    printf("YOUR TOTAL SCORE IS: %d out of 14\n\n", totalscore);
                    usleep(1000000);
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

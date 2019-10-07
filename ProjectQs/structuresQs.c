//
//  structQuestion.c
//  struct
//
//  Created by Hayes, Michael on 9/10/19.
//  Copyright © 2019 Hayes, Michael. All rights reserved.
//
#include <stdio.h>
#include <unistd.h>

int structuresQ()
{
    int score = 0;
    char answer;
    //The question
    printf("\n\n");
    printf("STRUCTURE QUESTION\n");
    printf("What occurs after a function in a line of code?\n");
    printf("A. a number is stored in the form of a string.\n");
    printf("B. an output is created\n");
    printf("C. nothing happens\n");    //User input
    puts("Enter your answer from A to C \n");
    while ((answer = getchar() )  == '\n');
    switch(answer)
    {
        case 'A':
        case 'a':
            puts("Sorry, you are incorrect.");
            puts("A function does not soley store numbers.");
            break;
        case 'C':
        case 'c':
            puts("Sorry. Something happens!");
            break;
        case 'B':
        case 'b':
            puts("Very good, you are correct!!");
            score++;;
            break;
        default:
           puts("You responded with an inappropriate number");
    }
    usleep(1000000);
    return score;
}

//
//  multipleChoice.c
//  Portfolio
//
//  Created by Memon, Suha on 9/24/19.
//  Copyright © 2019 Memon, Suha. All rights reserved.
//
#include <stdio.h>

int expressionsQ(void){
    int score = 0;
    char answer1;
    //The question
    puts("If A = 5 and B = 3");
    puts("!(a > b)  == (a <= b), evaluates to...");
    puts("A. True");
    puts("B. False");
    //User input
    puts("Enter your answer");
    //9answer1 = getchar();
    while ((answer1=getchar()) == '\n');
    switch(answer1)
    {
        case 'A':
        case 'a':
            score++;
            break;
        case 'B':
        case 'b':
            break;
        default:
            puts("You responded with an inappropriate character");
    }
    
    printf("\n");
    
    int answer2;
    //The question
    puts("If A = 4 and B = 2");
    puts("!(a == b), evaluates to...");
    puts("A. True");
    puts("B. False");
    //User input
    puts("Enter your answer");
    while ((answer2=getchar()) == '\n');
    switch(answer2)
    {
        case 'A':
        case 'a':
            score++;
            break;
        case 'B':
        case 'b':
            break;
        default:
            puts("You responded with an inappropriate character");
    }
    printf("\n");
    
    int answer3;
    //The question
    puts("If A = 7 and B = 3");
    puts("!(a == b) != (a != b), evaluates to...");
    puts("A. True");
    puts("B. False");
    //User input
    puts("Enter your answer");
    while ((answer3=getchar()) == '\n');
    switch(answer3)
    {
        case 'A':
        case 'a':
            break;
        case 'B':
        case 'b':
            score++;
            break;
        default:
            puts("You responded with an inappropriate character");
    }
    printf("\n");
    return score;
}

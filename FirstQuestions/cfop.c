//
//  cfop.c
//  Testform
//
//  Created by Shah, Tanay on 8/30/19.
//  Copyright © 2019 Shah, Tanay. All rights reserved.
//


//
//  main.c
//  Testform
//
//  Created by Shah, Tanay on 8/29/19.
//  Copyright © 2019 Shah, Tanay. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <unistd.h>
void cfop()
{
    printf("\n\n");
    printf("CONTROL FLOW OPERATORS QUESTION\n");
    //informs the test taker how to enter their answers
    printf("Please enter all answers in lower case!\n");
    //Print the question to console
    printf("If a student wants to create a new line after their printf statement\nWhat should they enter after they type their text for for the printf statement?\n");
    
    puts("A) %n");
    puts("B) /n");
    puts("C) \\n"); // escape sequence
    puts("D) ;n");
    printf("Answer: ");
    
    char answer; //Create variable
    
    //have the user assign a value to the variable
    while ((answer = getchar() )  == '\n');
    if(answer == 'c')
    {
        printf("You have entered the correct answer\n"); //correct answer
    }
    else
    {
        printf("Sorry that is not the right answer\n"); //incorrect answer
    }
    printf("\n");
    usleep(1000000);
}
void cfop2()
{
    //hhhhhhhhhh
    //Print the question to console
    printf("What's wrong with the following if statement: if(response = 'd')\n");
    
    printf("a) The single equal sign is meant for assigning a value not comparing it\n");
    printf("b) The single quotes surounding the d must be double quotes\n");
    printf("c) There is a variable which only accepts integer answers\n");
    printf("d) The if statement should be replaced with a while statement\n");
    printf("Answer:");
    
    char new;
    while ((new = getchar() )  == '\n'); //have the user assign a value to the variable
    if(new == 'a')
    {
        printf("You have entered the correct answer\n"); //correct answer
    }
    else
    {
        printf("Sorry that is not the right answer\n"); //incorrect answer
    }
        usleep(1000000);
    /*
    printf("What's wrong with the following if statement: if(response = 'd')\n");
    puts("A) The single equal sign is meant for assigning a value not comparing it");
    puts("B) The single quotes surounding the d must be double quotes");
    puts("C) There is a variable which only accepts integer answers");
    puts("D) The if statement should be replaced with a while statement");
    printf("Answer:");
    
    char ans;
    scanf("%c", &ans);
    
    if(ans == 'a')
    {
        printf("You have entered the correct answer\n");
    }
    else
    {
        printf("Sorry that is not the right answer\n");
    }
*/
}

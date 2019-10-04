//
//  questionPO.c
//  questionPO
//
//  Created by Vo, Anthony on 9/9/19.
//  Copyright © 2019 Vo, Anthony. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <unistd.h>
void questionPO() {
    //initializes answer
    char answer;
    printf("\n\n");
    printf("PRODUCT OWNER QUESTION\n");
    printf("Which control operator loops?\n"); //asks question
    printf("[A]if/then\n[B]switch\n[C]for\n[D]struct\n"); //Anthony Vo
    while ((answer = getchar() )  == '\n');
    
    //determines if answer is correct
    if (answer == 'C')  {
        printf("Correct\n");
    } else {
        printf("Incorrect\n");
    }
    usleep(1000000);
}

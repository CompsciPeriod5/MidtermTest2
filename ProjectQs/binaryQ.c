//
//  binaryQuestions.c
//  Projects
//
//  Created by Arcinue, Brent Gregory Arcinue on 10/3/19.
//  Copyright © 2019 Arcinue, Brent Gregory. All rights reserved.
//

#include <stdio.h>
#include "questions.h"
#include "askQuestion.h"

int binaryQuestions(void){
    
    char name[25];
    printf("Please enter your name: ");
    scanf("%s", name);
    
    printf("\n Confirming,  your name is: %s",  name);
    
    printf("\n\n Hello %s! This is the Binary Multiple Choice Test.\n There are 3 questions, good luck!\n\n", name);
    
int input, endOrNo = 0, endOrNo2 = 0, endOrNo3 = 0, binaryAns1, input2, binaryAns2, input3, binaryAns3;

while (endOrNo == 0) {
    binaryAns1 = 0;
    printf("What is the sum of 0101 and 0111?\n[1]01100\n[2]01010111\n[3]0101\n[4]1134\n");
    while (binaryAns1 == 0) {
        scanf("%d", &input);
        switch(input) {
            case 1:
                binaryAns1 = 1;
                printf("Correct! Loading Next Question.\n");
                endOrNo = 1;

            default:
                printf("Wrong\n");
                
while (endOrNo2 == 0) {
    binaryAns2 = 0;
    printf("What is 011010 – 1111?\n[1] 001001\n[2] 01010\n[3] 01011\n[4] 0000\n");
    while (binaryAns2 == 0) {
        scanf("%d", &input2);
        switch(input2) {
            case 3:
                binaryAns2 = 3;
                printf("Correct! Loading Next Question.\n");
                endOrNo2 = 1;
                
            default:
                printf("Wrong\n");
                
while (endOrNo3 == 0) {
    binaryAns3 = 0;
    printf("What numeral system is binary based on?\n[1] Roman\n[2] Base-2\n[3] Hex\n[4] 5G\n");
    while (binaryAns3 == 0) {
        scanf("%d", &input3);
        switch(input3) {
            case 2:
                binaryAns2 = 2;
                printf("Thank you for taking the test! Have a nice Day!\n");
                endOrNo3 = 1;
                return 0;
                
            default:
                printf("Wrong\n");
                break;
        }
    }
}
        }
    }
}
        }
    }
    }
    return 0;
}

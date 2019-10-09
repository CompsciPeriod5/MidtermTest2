//
//  binaryQuestions.c
//  Projects
//
//  Created by Arcinue, Brent Gregory Arcinue on 10/3/19.
//  Copyright © 2019 Arcinue, Brent Gregory. All rights reserved.
//

#include <stdio.h>
#include "questions.h"

int binaryQ(void){
   
    int score = 0;
    char answer;
    //The question
    printf("\n\n");
    printf("Hello! This is the Binary portion of the Multiple Choice Test.\n");
    printf("There are 3 questions, good luck!\n\n");
    
    printf("What is the sum of 0101 and 0111?\n"); //[1]01100\n[2]01010111\n[3]0101\n[4]1134
    printf("A. 01100 \n");
    printf("B. 01010111 \n");
    printf("C. 0101 \n");
    printf("D. 1134 \n");
    //User input
    puts("Enter your answer from A to D, the letters can be capital or lowercase \n");
    while ((answer = getchar() )  == '\n');
    switch(answer)
    {
        case 'A':
        case 'a':
            puts("Correct!\n");
            puts("0101 is equivalent to 5, 0111 is equivalent to 7, 5+7=12, 12 is equivalent to 01100. Loading Next Question.\n");
            score++;;
            break;
        case 'C':
        case 'c':
            puts("Sorry. That's incorrect.\n");
            break;
        case 'B':
        case 'b':
            puts("Sorry. That's incorrect.\n");
            break;
        case 'D':
        case 'd':
            puts("Sorry. That's incorrect.\n");
            break;
        default:
            puts("You responded with an inappropriate number\n");
    }
    printf("What is 011010 – 1111?\n");
    //What is 011010 – 1111?\n[1] 001001\n[2] 01010\n[3] 01011\n[4] 0000\n 3 is correct
    printf("A. 001001 \n");
    printf("B. 01010 \n");
    printf("C. 01011 \n");
    printf("D. 0000 \n");
    //User input
    puts("Enter your answer from A to D, the letters can be capital or lowercase \n");
    
    while ((answer = getchar() )  == '\n');
    switch(answer)
    {
        case 'A':
        case 'a':
            puts("Sorry. That's incorrect.\n");
            break;
        case 'C':
        case 'c':
            puts("Correct!");
            puts("011010 is equivalent to _, 1111 is equivalent to _, _-_=_, _ is equivalent to 01011. Loading Next Question.\n");
            score++;;
            break;
        case 'B':
        case 'b':
            puts("Sorry. That's incorrect.\n");
            break;
        case 'D':
        case 'd':
            puts("Sorry. That's incorrect.\n");
            break;
        default:
            puts("You responded with an inappropriate number\n");
    }
    //printf("What numeral system is binary based on?\n[1] Roman\n[2] Base-2\n[3] Hex\n[4] 5G\n")
    printf("What numeral system is binary based on?\n");
    printf("A. Roman \n");
    printf("B. Base-2 \n");
    printf("C. Hex \n");
    printf("D. 5G \n");
    //User input
    puts("Enter your answer from A to D, the letters can be capital or lowercase \n");
    
    while ((answer = getchar() )  == '\n');
    switch(answer)
    {
        case 'A':
        case 'a':
            puts("Sorry. That's incorrect.\n");
            break;
        case 'C':
        case 'c':
            puts("Sorry. That's incorrect.\n");
            break;
        case 'B':
        case 'b':
            puts("Correct! \n");
            score++;;
        break;
        case 'D':
        case 'd':
            puts("Sorry. That's incorrect.\n");
            break;
        default:
            puts("You responded with an inappropriate number\n");
    }
    usleep(1000000);
    return score;
}

    /*
old code, it had issues with exiting the loop. additionally we donn't have letter answers like everyone else.
     
    int score = 0;
    char name[25];
    printf("Please enter your name: ");
    scanf("%s", name);
    
    printf("\n Confirming,  your name is: %s",  name);
    
    printf("\n\n Hello %s! This is the Binary Multiple Choice Test.\n There are 3 questions, good luck!\n\n", name);
    
    int endOrNo = 0, endOrNo2 = 0, endOrNo3 = 0, binaryAns1, binaryAns2, binaryAns3;
    char input, input2, input3;
    
    while (endOrNo == 0) {
        binaryAns1 = 0;
        printf("What is the sum of 0101 and 0111?\n[1]01100\n[2]01010111\n[3]0101\n[4]1134\n");
        while (binaryAns1 == 0) {
            scanf("%c", &input);
            switch(input) {
                case a:
                    binaryAns1 = a;
                    printf("Correct! Loading Next Question.\n");
                    score++;
                    endOrNo = 1;
                    
                default:
                    printf("Wrong\n");
                    
                    while (endOrNo2 == 0) {
                        binaryAns2 = 0;
                        printf("What is 011010 – 1111?\n[1] 001001\n[2] 01010\n[3] 01011\n[4] 0000\n");
                        while (binaryAns2 == 0) {
                            scanf("%c", &input2);
                            switch(input2) {
                                case 3:
                                    binaryAns2 = 3;
                                    printf("Correct! Loading Next Question.\n");
                                    score++;
                                    endOrNo2 = 1;
                                    
                                default:
                                    printf("Wrong\n");
                                    
                                    while (endOrNo3 == 0) {
                                        binaryAns3 = 0;
                                        printf("What numeral system is binary based on?\n[1] Roman\n[2] Base-2\n[3] Hex\n[4] 5G\n");
                                        while (binaryAns3 == 0) {
                                            scanf("%c", &input3);
                                            switch(input3) {
                                                case 2:
                                                    binaryAns2 = 2;
                                                    printf("Thank you for taking the test! Have a nice Day!\n");
                                                    endOrNo3 = 1;
                                                    score++;
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
    return score;
}
*/


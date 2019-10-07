//
//  logicQ.c
//  GitMidTest
//
//  Created by Marwah, Tanmay on 10/7/19.
//  Copyright © 2019 Rosen, Aidan. All rights reserved.
//

#include <stdio.h>
int logicQ(void){
    int score = 0;
    char ans1,ans2,ans3;
    printf("Please answer all questions in lowercase!\n");
    
    
    printf("The Expression is 3+=5\n");
    printf("A is the left term\n");
    printf("What is the new value for 'A' after the expression is run?\n");
    printf("A) 3 B) 6 C) -2 D) 8\n");
    scanf("%c",&ans1);
    if(ans1 == 'd'){
        printf("Correct!\n");
        score++;
    } else{
        printf("Incorrect. The correct answer is D\n");
    }
    
        //----------------------------------
    
    printf("The Expression is 7+=5\n");
    printf("A is the left term\n");
    printf("What is the new value for 'A' after the expression is run?\n");
    printf("A) 2 B) 3 C) 12 D) 5\n");
    scanf("%c",&ans2);
    if(ans2 == 'c'){
        printf("Correct! \n");
        score++;
    } else{
        printf("Incorrect. The correct answer is C\n");
    }
    
    //----------------------------------
    
    printf("The Expression is 12/=2\n");
    printf("A is the left term\n");
    printf("What is the new value for 'A' after the expression is run?\n");
    printf("A) 9 B) 6 C) 24 D) 10\n");
    scanf("%c",&ans3);
    if(ans3 == 'b'){
        printf("Correct!\n");
        score++;
    } else{
        printf("Incorrect. The correct answer is D\n");
    }
    return 0;
}

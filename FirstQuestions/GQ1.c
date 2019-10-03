//
//  GQ1.c
//  GitMidTest
//
//  Created by Rosen, Aidan on 9/20/19.
//  Copyright © 2019 Rosen, Aidan. All rights reserved.
//

#include "structures.h"
#include <stdlib.h>
#include <time.h>
void questionOne(void){
    
    //printf("A. Creating an account \nB. Adding an existing remote \nC. Pushing \nD. Commiting\n\n");
    //^ changing to random question arrangement 
    char* bullets [4]; //establishes ABCD bullets to print
    bullets[0] =  "A";
    bullets[1] =  "B";
    bullets[2] =  "C";
    bullets[3]  = "D";
    int wrongs [3] = {0,1,2};
    int wrongWrongs [3] = {0,1,2};
    g.entrySize = 2;
    srand(time(0));
    g.i = 0;
    for (g.i = 0; g.i < 3; g.i ++){
        g.entry = rand() % (g.entrySize + 1 - 0) + 0;
        wrongs[g.i] = wrongWrongs[g.entry];
        for (int c = g.entry; c < g.entrySize + 1; c++) {
            wrongWrongs[c] = wrongWrongs[c+1];
            //printf("%d g.entry\n", g.entry); For Monitoring Random Behavior
            //printf("%d g.entrySize\n", g.entrySize); For Monitoring Random Behavior
            }
        g.entrySize --;
    }
    //for(int loop = 0; loop < 3; loop++) For Monitoring arrangement of random values
        //printf(" %d  ", wrongs[loop]);
    g.truth = rand() % (3 + 1 - 0) + 0;
    //printf("\n %d \n", g.truth); for monitoring randomly generated value
    int i = 0;
    int p = 0;
    printf("\n\nWhat is the absolute first step in connecting a project to Github?\n\n");
    while (i < 4) {    //change i at some point.
        printf("\n%s ", bullets[i]); //prints current letter
        if (i == g.truth) {   //prints correct answer
            printf("Creating and linking a Github account\n");
        } else {
            if (wrongs[p] == 0){  //Strings proved too difficult to work with, used numbers instead.
                printf("Pushing \n");
            }
            if (wrongs[p] == 1){ //Different wrong answer is printed based on number randomly arranged into the array
                printf("Commiting \n");
            }
            if (wrongs[p] == 2){
                printf("Adding an existing remote \n");
            }
            p++;
        }
        i++;
        }
    
  
    //strcmp(&g.truth, bullets[i]); *///USE THIS TO COMPARE CURRENT LETTER PRINTING AND TRUE LETTER FOR ANSWER, USE THE LETTER THAT NEEDS TO BE TYPED IN < possibly no longer necessary
    printf("\n");
    scanf("%s", &g.answer);  //commenting to focus on printing in random order.
    g.answer = toupper(g.answer);
    printf("\nYour answer was:\n%c\n", g.answer);
    
    g.right = strcmp(&g.answer, bullets[g.truth]);
   /* printf("\n\n %s \n", bullets[g.truth]);
    printf("\n\n %c \n", g.answer);   For monitoring whether the answer was right or wrong,
    printf("\n\n %d \n", g.right);*/
    if (g.right == 0) {
        
        printf("\nYou did it!\n");
        
        g.score += 1;
        
        printf("Your score is now: %d\n\n", g.score);
        
    } else {
        
        printf("W R O N G \n");
        
        printf("Your score is still: %d\n\n", g.score);
        
    }
}

//
//  GQ1.c
//  GitMidTest
//
//  Created by Rosen, Aidan on 9/20/19.
//  Copyright © 2019 Rosen, Aidan. All rights reserved.
//

#include "structures.h"
int questionOne(void){
    printf("\n\nWhat is the first step in connecting to github? \n");
    
    printf("A. Creating an account \nB. Adding an existing remote \nC. Pushing \nD. Commiting\n\n");
    
    scanf("%s", &g.answer);
    
    printf("\nYour answer was:\n%c\n", toupper(g.answer));
    
    g.truth = strcmp(&g.answer, "a");
    
    printf("\n%d\n", g.truth);
    
    if (g.truth == 0) {
        
        printf("You did it! \n");
        
        g.score += 1;
        
        printf("Your score is now: %d\n\n", g.score);
        
    } else {
        
        printf("W R O N G \n");
        
        printf("Your score is still: %d\n\n", g.score);
        
    }
    return 0; 
}

//
//  structures.h
//  GitMidTest
//
//  Created by Rosen, Aidan on 9/23/19.
//  Copyright © 2019 Rosen, Aidan. All rights reserved.
//

#ifndef github_h
#define github_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <math.h>

struct numbers {
    char answer;
    int truth;
    int score;
    int entry;
    int entrySize; //reduces size of current array
    int right;
    int i; 
};

struct numbers g;

#endif /* github_h */

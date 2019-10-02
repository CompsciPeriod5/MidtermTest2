//
//  structures.h
//  GitMidTest
//
//  Created by Rosen, Aidan on 9/23/19.
//  Copyright © 2019 Rosen, Aidan. All rights reserved.
//

#ifndef structures_h
#define structures_h
#include <stdio.h>//look here for duplicate symbols
#include <string.h>//look here for duplicate symbols
#include <ctype.h> //look here for duplicate symbols
struct numbers {
    char answer;
    int truth;
    int score;
    int entry;
    int entrySize; //reduces size of current array
    int right;
    int i; 
} g;

#endif /* structures_h */

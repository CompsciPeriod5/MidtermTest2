//
//  questionDriver.h
//  GitMidTest
//
//  Created by Vo, Anthony on 10/3/19.
//  Copyright © 2019 Rosen, Aidan. All rights reserved.
//

#ifndef questionDriver_h
#define questionDriver_h

#include <stdio.h>

struct values {
    int score, questions;
}; //for feedback

struct values qDriver (int section, int questions);

#endif /* questionDriver_h */

//
//  questionDriver.c
//  menuFeedback
//
//  Created by Vo, Anthony on 10/3/19.
//  Copyright © 2019 Vo, Anthony. All rights reserved.
//

#include "questionDriver.h"
#include <stdio.h>

struct values qDriver (int section) { 
    struct values returnedVal;
    switch (section) {
        case 1:
            returnedVal.score = datatypesQ();
            break;
        case 2:
            returnedVal.score = binaryQ();
            break;
        case 3:
            returnedVal.score = operatorsQ();
            break;
        case 4:
            returnedVal.score = logicQ();
            break;
        case 5:
            returnedVal.score = comparisonsQ();
            break;
        case 6:
            returnedVal.score = githubQ();
            break;
        case 7:
            returnedVal.score = structuresQ();
            break;
        case 8:
            returnedVal.score = loopQ();
            break;
        case 9:
            returnedVal.score = expressionsQ();
            break;
    }
    returnedVal.questions = 1;
    return returnedVal;
}

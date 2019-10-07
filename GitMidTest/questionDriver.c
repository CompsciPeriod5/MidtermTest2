//
//  questionDriver.c
//  menuFeedback
//
//  Created by Vo, Anthony on 10/3/19.
//  Copyright © 2019 Vo, Anthony. All rights reserved.
//

#include "questionDriver.h"
#include <stdio.h>

struct values qDriver (int section) { //0 for math, 1 for binary, 2 for assignment, 3 for expressions, 4 for logic and negation, 5 for data types
    struct values returnedVal;
    switch (section) {
        case 0:
            returnedVal.score = mathQ();
            break;
        case 1:
            returnedVal.score = binaryQ();
            break;
        case 2:
            returnedVal.score = assignmentQ();
            break;
        case 3:
            returnedVal.score = expressionQ();
            break;
        case 4:
            returnedVal.score = logicQ();
            break;
        case 5:
            returnedVal.score = datatypesQ();
            break;
        case 6:
            returnedVal.score = githubQ();
            break;
        case 7:
            returnedVal.score = structQ();
            break;
        case 8:
            returnedVal.score = loopQ();
            break;

    }
    returnedVal.questions = 1;
    return returnedVal;
}

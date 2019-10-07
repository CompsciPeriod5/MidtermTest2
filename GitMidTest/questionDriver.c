//
//  questionDriver.c
//  menuFeedback
//
//  Created by Vo, Anthony on 10/3/19.
//  Copyright © 2019 Vo, Anthony. All rights reserved.
//

#include "questionDriver.h"

struct values qDriver (int section, int questions) {
    struct values returnedVal;
    switch (section) {
        case 1:
            returnedVal.score = datatypesQ();
            break;
        case 2:
            returnedVal.score = binaryQ();
            break;
        case 3:
            returnedVal.score = logicQ();
            break;
        case 4:
            returnedVal.score = githubQ();
            break;
        case 5:
            returnedVal.score = structuresQ();
            break;
        case 6:
            returnedVal.score = expressionsQ();
            break;
    }
    returnedVal.questions = questions;
    return returnedVal;
}

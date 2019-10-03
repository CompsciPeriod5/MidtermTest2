//
//  main.c
//  questionDriver
//
//  Created by Skarecky, Parker on 10/3/19.
//  Copyright © 2019 Skarecky, Parker. All rights reserved.
//

#include "questions.h"
struct mainSection{
    int score,questions;
    int sectionScore[5];
    int sectionQuestions[5];
    
} s;
struct mathSection{
    char *sectionName;
    int sNum;       // section number
    int randCtrl;
    
} m;
int questionDriver(char *message) {
    s.score = 0;
    s.questions = 0;
    for (int i=0;i<5;i++) {
        s.sectionQuestions[i]=0;
        //printf("%i",i);
    }
    for (int i=0;i<5;i++) {
        s.sectionScore[i]=0;
        //printf("%i",i);
    }
    //s.sectionQuestions[5]={0,0,0,0,0};
    srand((uint)time(0));
    
    { // Math
        m.sectionName = "Math";
        m.sNum = 0;       // section number
        m.randCtrl = 5 + 1;
        
        s.sectionQuestions[m.sNum] = rand() % m.randCtrl;  s.questions += s.sectionQuestions[m.sNum];
        s.sectionScore[m.sNum] = mathQuestions(s.sectionQuestions[m.sNum]); s.score += s.sectionScore[m.sNum];
        printf("Your %s score is %d out of %d\n\n", m.sectionName, s.sectionScore[m.sNum], s.sectionQuestions[m.sNum] );
    }
    
    { // Binary Math
        m.sectionName = "Binary";
        m.sNum = 1;       // section number
        m.randCtrl = 0 + 1;
        
        s.sectionQuestions[m.sNum] = rand() % m.randCtrl; s.questions += s.sectionQuestions[m.sNum];
        //s.sectionScore[m.sNum] = binaryQuestions(s.sectionQuestions[m.sNum]); score +=s.sectionScore[m.sNum];
        printf("Your %s score is %d out of %d\n\n", m.sectionName,s.sectionScore[m.sNum], s.sectionQuestions[m.sNum] );
    }
    
    { // Assignment operators
        m.sectionName = "Assignment";
        m.sNum = 1;       // section number
        m.randCtrl = 0 + 1;
        
        s.sectionQuestions[m.sNum] = rand() % m.randCtrl; s.questions += s.sectionQuestions[m.sNum];
        //s.sectionScore[m.sNum] = assignmentQuestions(s.sectionQuestions[m.sNum]); score +=s.sectionScore[m.sNum];
        printf("Your %s score is %d out of %d\n\n", m.sectionName,s.sectionScore[m.sNum], s.sectionQuestions[m.sNum] );
    }
    
    { // Expressions
        m.sectionName = "Expressions";
        m.sNum = 2;       // section number
        m.randCtrl = 0 + 1;
        
        s.sectionQuestions[m.sNum] = rand() % m.randCtrl; s.questions += s.sectionQuestions[m.sNum];
        //s.sectionScore[m.sNum] = expressionQuestions(s.sectionQuestions[m.sNum]); score +=s.sectionScore[m.sNum];
        printf("Your %s score is %d out of %d\n\n", m.sectionName,s.sectionScore[m.sNum], s.sectionQuestions[m.sNum] );
    }
    
    { // Logic and Negation
        m.sectionName = "Logic";
        m.sNum = 3;       // section number
        m.randCtrl = 5 + 1;
        
        s.sectionQuestions[m.sNum] = rand() % m.randCtrl; s.questions += s.sectionQuestions[m.sNum];
        s.sectionScore[m.sNum] = logicQuestions(s.sectionQuestions[m.sNum]); s.score +=s.sectionScore[m.sNum];
        printf("Your %s score is %d out of %d\n\n", m.sectionName,s.sectionScore[m.sNum], s.sectionQuestions[m.sNum] );
    }
    
    { // Data Type Conversion
        m.sectionName = "Conversion";
        m.sNum = 4;       // section number
        m.randCtrl = 0 + 1;
        
        s.sectionQuestions[m.sNum] = rand() % m.randCtrl; s.questions += s.sectionQuestions[m.sNum];
        //s.sectionScore[m.sNum] = conversionQuestions(s.sectionQuestions[m.sNum]); score +=s.sectionScore[m.sNum];
        printf("Your %s score is %d out of %d\n\n", m.sectionName,s.sectionScore[m.sNum], s.sectionQuestions[m.sNum] );
    }
    
    // Final Score of test
    sprintf(message, "%d out of %d", s.score,s.questions);
    printf("Your score is %s\n", message);
    
    return s.questions;
    
}

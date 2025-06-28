//
// Created by lomanski on 28.06.2025.
//

#ifndef QUESTION_H
#define QUESTION_H

#include <iostream>

using namespace std;

class Question {
    public:

    string content;
    string a,b,c,d;
    int question_nr;
    string good_ans;
    string give_ans;
    int counter;


    void load(); //loading question
    void show(); //printing loaded question
    void check(); //checking loaded question
};

#endif //QUESTION_H

#include <iostream>
#include "question.h"

using namespace std;

int main() {

    Question questions[5];
    int sum=0;
    for (int i = 0; i <= 4; ++i) {
        questions[i].question_nr=i+1;
        questions[i].load();
        questions[i].show();
        questions[i].check();
        sum+=questions[i].counter;
    }
    cout<<"End of quiz. Your score: "<<sum;

    return(0);
}
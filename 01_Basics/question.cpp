//
// Created by lomanski on 28.06.2025.
//

#include <iostream>
#include "question.h"
#include <fstream> //biblio odpowiedzialna za operacje i/o
#include <cstdlib>

using namespace std;

void Question::load() {
    fstream file;
    file.open("quiz.txt", ios::in);

    if (file.good()==false) {
        cout << "File does not exist" << endl;
        exit(0);
    }

    int line_nr = (question_nr-1)*6+1;
    int actual_nr = 1;
    string line;

    while (getline(file, line)) {

        if (actual_nr == line_nr)   content=line;
        if (actual_nr == line_nr+1) a=line;
        if (actual_nr == line_nr+2) b=line;
        if (actual_nr == line_nr+3) c=line;
        if (actual_nr == line_nr+4) d=line;
        if (actual_nr == line_nr+5) good_ans=line;

        actual_nr++;
    }

    file.close();

}

void Question::show() {
    cout<<endl<<content<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"Your answer: ";
    cin>>give_ans;
}

void Question::check() {
    if (give_ans==good_ans) counter++;
    else counter=0;
}





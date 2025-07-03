#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct Tarcze {
    int init{}, sek{}, used{};
};
struct Probe {
    Probe() {
        init();
    }
    void init() {
        ile_tarcz=0; ile_strzalow=0;
        strzaly.clear();
    }
    int ile_tarcz{}, ile_strzalow = 0;
    vector<int>strzaly;
    vector<Tarcze>tarczek{};
};

int main() {

    generuj_tabele(false)


















    return 0;
}
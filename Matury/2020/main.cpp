#include <iostream>
#include <fstream>
#include <memory>
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

vector<int> zadanie4_2{};

void generuj_tabele(bool powtarzanie ) {
    fstream plik("../festyn.txt", ios::in);

    while(!plik.eof()) {
        int liczba{};
        unique_ptr<Probe> ptr(new Probe);
        plik>>ptr->ile_tarcz;

        int temp2{};

        for (size_t i = 0; i < ptr->ile_tarcz; i++) {
            int a{}, b{};
            plik>>a>>b;
            Tarcze temp;
            temp.init=a;
            temp.sek=b;
            temp.used=1;
            ptr->tarczek.emplace_back(temp);
            if (b>temp2)
                temp2=b;
        }
        zadanie4_2.emplace_back(temp2);

        plik>>ptr->ile_strzalow;
        for (int i = 0; i < ptr->ile_strzalow; ++i) {
            int a{};
            plik >> a;
            ptr->tarczek.emplace_back(a);
        }
        int punkty{};
        for (size_t i = 0; i < ptr->ile_strzalow; ++i) {
            for (size_t j=0;j<ptr->ile_tarcz; ++j) {
                if (ptr->tarczek[j].used==0)
                    continue;
                if ((ptr->strzaly[i]>=ptr->tarczek[j].init)&&(ptr->strzaly[i]<ptr->tarczek[j].init+ptr->tarczek[j].sek)) {
                    punkty++;
                    if (!powtarzanie) {
                        ptr->tarczek[j].used=0;
                    }
                }
            }
        }
        cout<<punkty<<" ";
    }

    plik.close();
}

int main() {

    cout<<"Zadanie 4.1"<<endl;
    zadanie4_2.clear();
    generuj_tabele(false);
    cout<<"Zadanie 4.2"<<endl;
    for (auto x: zadanie4_2) {

    }


















    return 0;
}
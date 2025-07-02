#include <iostream>
#include <fstream>
#include <set>
#include <vector>

using namespace std;

vector<int> kontener;
int liczba{};

int main() {

    int z4_1ile{}, z4_1num{};
    int z4_2roz{}, z4_2pop_roz{}, z4_2num{};
    set<int>pierwsze_pop; set<int>pierwsze; int z4_2liczpier;

    fstream wczytanie("Dane_2205/przyklad.txt", ios::in); //ios::in jest domyślny
    fstream zapisanie("Dane_2205/wyniki4.txt", ios::out); //ios::out ma domyślnie nadpisywanie wartości
    cout<<"kompilacja"<<endl;

    while (wczytanie >> liczba) {
        //kontener.push_back(liczba);

        //4.1
         string h = to_string(liczba);
         if (h[0]==h[h.size()-1]) {
             z4_1ile++;
             if (z4_1num == 0)
                 z4_1num=liczba;
         }

        //4.2
        int zamiennik = liczba;
        z4_2roz=0;
        pierwsze.clear();
        for (int i = 2; i <= zamiennik;) {
            if (zamiennik%i == 0) {
                zamiennik = zamiennik / i;
                z4_2roz++;
                pierwsze.insert(i);
                if (z4_2roz>z4_2pop_roz) {
                    z4_2pop_roz=z4_2roz;
                    z4_2num = liczba;
                }
                if (pierwsze.size()>pierwsze_pop.size()) {
                    pierwsze_pop=pierwsze;
                    z4_2liczpier = liczba;
                }
            }
            else
                i++;
        }
    }





    zapisanie << z4_1ile<<" "<<z4_1num<<endl;
    zapisanie << z4_2num << " " << z4_2pop_roz<<" "<<z4_2liczpier<<" "<< pierwsze_pop.size()<<endl;
    wczytanie.close();
    zapisanie.close();
}
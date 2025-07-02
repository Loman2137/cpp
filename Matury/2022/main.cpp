#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector<int> kontener;
int liczba;

int main() {
    int z4_1ile{}, z4_1num{};
    int z4_2roz{}, z4_2pop_roz{}, z4_2num{};

    fstream wczytanie("Dane_2205/przyklad.txt", ios::in); //ios::in jest domyślny
    fstream zapisanie("Dane_2205/wyniki4.txt", ios::out); //ios::out ma domyślnie nadpisywanie wartości
    cout<<"kompilacja"<<endl;

    // while (wczytanie >> liczba) {
    //     //kontener.push_back(liczba);
    //
    //     //4.1
    //     string h = to_string(liczba);
    //     if (h[0]==h[h.size()-1]) {
    //         z4_1ile++;
    //         if (z4_1num == 0)
    //             z4_1num=liczba;
    //     }
    // }

    while (wczytanie >> liczba) {
        //4.2
        z4_2roz=0;
        for (int i = 2; i < liczba;) {

            if (liczba%i == 0) {
                cout<<"liczba równa się: "<<liczba<<", a dzielnik równa się: "<<i<<endl;
                liczba = liczba / i;
                z4_2roz++;
            }
            if (z4_2roz>z4_2pop_roz) {
                z4_2pop_roz=z4_2roz;
                z4_1num=liczba;
            }
        }
    }





    zapisanie << z4_1ile<<" "<<z4_1num<<endl;
    zapisanie << z4_2pop_roz << " " << z4_2num <<endl;
    wczytanie.close();
    zapisanie.close();
}
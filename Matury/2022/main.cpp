#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector<int> kontener;
int liczba;

int main() {

    int z4_1ile{}, z4_1num;;

    fstream wczytanie("Dane_2205/przyklad.txt", ios::in);   //ios::in jest domyślny
    fstream zapisanie("Dane_2205/wyniki4.txt", ios::out); //ios::out ma domyślnie nadpisywanie wartości
    cout<<"kompilacja"<<endl;
    //while (wczytanie >> liczba) {zapisanie << liczba;}

    while (wczytanie >> liczba) {
        kontener.push_back(liczba);
        string h = to_string(liczba);
        if (h[0]==h[h.size()-1]) {
            z4_1ile++;
            if (z4_1num == 0)
                z4_1num=liczba;
        }
    }
    zapisanie << z4_1ile<<" "<<z4_1num;


    wczytanie.close();
    zapisanie.close();
}
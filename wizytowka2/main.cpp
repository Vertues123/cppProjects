#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

string imie1, nazwisko1;
int nr1;

int main()
{
    fstream plik;
    plik.open("C:/Users/PC/Documents/c++/wyzytowka/wizytowka.txt",ios::in);

    if(plik.good()==false){
       cout<< "Plik nie istnieje";
       exit(0);
    }

    string linia;
    int nr_lini=1;

    while(getline(plik,linia)){

        switch(nr_lini){
            case 1: imie1 = linia; break;
            case 2: nazwisko1 = linia; break;
            case 3: nr1 = atoi(linia.c_str()); break;
        }

        nr_lini++;
    }

    plik.close();

    cout<<imie1<<endl;
    cout<<nazwisko1<<endl;
    cout<<nr1<<endl;


    return 0;
}

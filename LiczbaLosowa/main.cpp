#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int liczba, strzal, proba=0;
int main()
{
    cout << "Witaj. Pomyslalem liczbe od 1 do 100." << endl;
    srand(time(NULL));
    liczba=rand()%100+1;

    while(strzal!=liczba){

        proba++;

        cout << "Podaj swoja liczbe: ";
        cin >> strzal;

        if(strzal==liczba){
            cout << "Brawo! Podana liczba jest poprawna. Zgadles za "<<proba<<" razem!" << endl;
        }else if(strzal<liczba){
            cout << "Podana liczba jest za mala." << endl;
        }else if (strzal>liczba){
            cout << "Podana liczba jest zbyt duza." << endl;
        }
    }
    system("pause");
    return 0;
}

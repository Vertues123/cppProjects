#include <iostream>
#include <fstream>

using namespace std;

string imie, nazwisko;
int nr;
int main()
{
    cout << "Podaj imie: ";           cin >> imie;
    cout << "Pdaj nazwisko: ";        cin >> nazwisko;
    cout << "Podaj nr telefonu: ";    cin >> nr;

    fstream plik;
    plik.open("wizytowka.txt",ios::out);
    plik<<imie<<endl;
    plik<<nazwisko<<endl;
    plik<<nr<<endl;
    plik.close();

    return 0;
}

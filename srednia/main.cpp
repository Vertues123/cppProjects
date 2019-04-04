#include <iostream>

using namespace std;
float ocena[5], suma=0, srednia;
int main()
{
    cout << "Podaj swoje oceny:" << endl;
    for(int i=0; i<=4; i++){
        cin >> ocena[i];
        suma+=ocena[i];
    }
    srednia= suma/5;
    cout << "Srednia wynosi " << srednia << endl;

    return 0;
}

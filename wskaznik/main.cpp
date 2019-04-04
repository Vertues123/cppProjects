#include <iostream>

using namespace std;
float srednia(float *tab, int ile){
    float suma=0;
    for(int i=1; i<ile; i++){
        suma+=*tab;
        *tab=999;
        tab++;
    }
    return suma/ile;
}
int main()
{
    float tablica[3];

    tablica[0]=4;
    tablica[1]=3.2;
    tablica[2]=0.9;

    cout<<"Srednia wynosi: "<<srednia(tablica,3);
    return 0;
}

#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int ile;
clock_t start, stop;
double czas;

void sortowanie(int *tab, int n){
    for(int i=1; i<n; i++){
        for(int j=n-1; j>=1; j--){
            if(tab[j]<tab[i]){ //<rosnaco; >malejaco;
                int bufor;
                bufor=tab[j-1];
                tab[j]=tab[i];
                tab[j]=bufor;
            }
        }
    }

}
int main()
{

    cout<<"Ile jest liczbdo posortowania: ";
    cin>>ile;
//dynamiczna alokacja tablic
    int *tablica;
    tablica=new int [ile];

//inicjowanie generatora
    srand(time(NULL));
//wczytywanie do tablicy
    for(int i=1; i<ile; i++){
        tablica[i]=rand()%100000+1;
    }
/*
    cout<<"Przed posortowaniem: " << endl;
    for(int i=1; i<ile; i++){
        cout <<tablica[i]<<" ";
    }
*/
    start=clock();
    sortowanie(tablica,ile);

    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"Czas sortowania: "<< czas;
    delete [] tablica;
    /*
    cout<<"Po posortowniu: "<< endl;
    for(int i=1; i<ile; i++){
        cout <<tablica[i]<<" ";
    }
    */
    return 0;
}

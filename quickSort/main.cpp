#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int ile;
clock_t start, stop;
double czas;

void quicksort(int *tablica, int lewy, int prawy)
{
    int v=tablica[(lewy+prawy)/2];
    int i,j,x;
    i=lewy;
    j=prawy;
    do
    {
        while (tablica[i]<v)
            i++;
        while (tablica[j]>v)
            j--;
        if (i<=j)
        {
            x=tablica[i];
            tablica[i]=tablica[j];
            tablica[j]=x;
            i++;
            j--;
        }
    }
    while (i<=j);
    if (j>lewy)
        quicksort(tablica,lewy, j);
    if (i<prawy)
        quicksort(tablica, i, prawy);
}

int main()
{

    cout<<"Ile jest liczb do posortowania: ";
    cin>>ile;

//dynamiczna alokacja tablic
    int *tablica;
    tablica=new int [ile];

//inicjowanie generatora
    srand(time(NULL));

//wczytywanie do tablicy
    for(int i=1; i<ile; i++)
    {
        tablica[i]=rand()%100000+1;
    }

    cout<<"Przed posortowaniem: " << endl;
    for(int i=1; i<ile; i++)
    {
        cout <<tablica[i]<<" ";
    }

    start=clock();
    quicksort(tablica, 0, ile-1);

    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<endl<<"Czas sortowania: "<< czas<< endl;
    delete [] tablica;

    cout<<"Po posortowniu: "<< endl;
    for(int i=1; i<ile; i++)
    {
        cout <<tablica[i]<<" ";
    }

}

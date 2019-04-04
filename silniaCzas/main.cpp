#include <iostream>
#include <time.h>

using namespace std;
clock_t start, stop;
double czas;

double silnia(int n){
    if(n==0) return 1;
    else return n*silnia(n-1);
}
int main()
{
    int x;
    double wynik;
    cout << "Podaj silnie: !";
    cin>>x;
    start=clock();
    cout<<"Silnia wynosi: "<<silnia(x)<<endl;
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"Czas rekurencja: "<<czas<<endl;

    start=clock();
    for(int i=1; i<=x; i++){
        wynik*=i;
    }
    stop=clock();
    czas=(double)(stop-start)/CLOCKS_PER_SEC;
    cout<<"Silnia wynosi: "<<wynik<<endl;
    cout<<"Czas iteracji: "<<czas<<endl;

    return 0;
}

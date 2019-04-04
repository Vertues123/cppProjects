#include <iostream>

using namespace std;
long int potega(int p, int w){
    if(w==0) return 1;
    else return p*potega(p,w-1);
}

int main()
{
    int p,w;
    cout << "Podaj liczbe do spotegowania: ";
    cin>>p;
    cout<<endl<<"Podaj wykladnik: ";
    cin>>w;
    cout<<endl<<"potega wynosi: "<<potega(p,w);
    return 0;
}

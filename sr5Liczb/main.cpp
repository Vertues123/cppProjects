#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
float liczba[5];
float suma=0;
float sr,n,m;
int main()
{
    cout<<"Podaj 5 liczb: "<<endl;

    for(int i=0; i<=4; i++){
        cin>>liczba[i];
        suma+=liczba[i];
    }

    sr=suma/5;
//////////////////////////////////////////////////////

    for(var i=0; i<4; i++){
        n=w_b(liczba[i]);
        if(n<liczba[i]) n=;
    }


    cout<<"Srednia: "<<sr;
    cout<<"Najblizsza sredniej"<<n;

    return 0;
}
float w_b(float x){
    return abs(x);
}

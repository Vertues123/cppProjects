#include <iostream>

using namespace std;

float metry; //zmienna globalna

float ile_cali(float m){

    float cale=m*39.37; //zmienna lokalna

    return cale;
}
float ile_yardow(float x){
    return x*1.0936;
}
//procedura
void ile_mil(float m){
    cout<<"na mile: "<<m*0.0006213;
}

int main()
{
    cout<<"Podaj ile metrow: ";
    cin>>metry;

    cout<<"na cale "<<ile_cali(metry)<<endl;
    cout<<"na yardy "<<ile_yardow(metry)<<endl;
    ile_mil(metry);
    return 0;
}

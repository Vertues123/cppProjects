#include <iostream>

using namespace std;
int a,b,c,m;
int main()
{
    cout << "Podaj 3 liczby:" << endl;
    cin>>a>>b>>c;

    m=a;

    if(b>m) m=b;
    if(c>m) m=c;

    cout <<"Najwiekrza liczba to " << m;

    return 0;
}

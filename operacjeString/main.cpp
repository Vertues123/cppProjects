#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string a="Ala ma ";
    string b="kota.";
    string napis=a+b;
    cout<<napis<<endl; //³¹czenie zmiennchy tekstowych konkatenacja

    transform(napis.begin(),napis.end(),napis.begin(),::toupper);
    cout<<napis<<endl;
    transform(napis.begin(),napis.end(),napis.begin(),::tolower);
    cout<<napis<<endl;

    return 0;
}

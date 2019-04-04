#include <iostream>
#include <string>
using namespace std;

int main()
{
    string napis="Ala ma kota.";
    string szukaj="kot";

    size_t pozycja=napis.find(szukaj);

    if(pozycja!=string::npos)
        cout<<"znaleziono na pozycji: "<<pozycja;
    else
        cout<<"nie znalezione!";
    return 0;
}

#include <iostream>

using namespace std;

string pin;

int main()
{
    cout << "Witaj" << endl;
    cout << "Podaj PIN" << endl;

    cin >> pin;

    if(pin=="1234"){
        cout << "Poprawny PIN";
    }else{
        cout << "Niepoprawny PIN";
    }
    return 0;
}

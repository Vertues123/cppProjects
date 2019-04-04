#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "Podaj login:" << endl;
    cin >> login;
    cout << "Podaj haslo:" << endl;
    cin >> haslo;

    if((login=="admin")&&(haslo=="admin")){
        cout << "Access granded";
    }else{
        cout << "Access denited";
    }


    return 0;
}

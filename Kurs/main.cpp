#include <iostream>

using namespace std;

int uczniowie, cukierki, x, y;

int main()
{
    cout << "Ile jest uczniow w twojej klasie: ";

    cin >> uczniowie;

    cout << "Ile cukierkow kupila mama: ";

    cin >> cukierki;

    x = cukierki / (uczniowie-1);

    cout << "Uczen dostanie "<<x << endl;

    y = cukierki - x*(uczniowie-1);

    cout << "Jas dostanie "<< y;

    return 0;
}

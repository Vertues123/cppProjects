#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Podaj swoj wiek:" << endl;
    cin >> wiek;

    if(wiek>=35){
        cout << "Jesteœ pelnoletni i mozesz zostac prezydentem.";
    }else if(wiek >= 18 && wiek <35){
        cout << "Jestes pelnoletni ale nie mozesz zostac prezydentem.";
    }else{
        cout << "Jesteœ niepelnoletni.";
    }

    return 0;
}

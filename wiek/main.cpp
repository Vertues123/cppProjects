#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Podaj swoj wiek:" << endl;
    cin >> wiek;

    if(wiek>=35){
        cout << "Jeste� pelnoletni i mozesz zostac prezydentem.";
    }else if(wiek >= 18 && wiek <35){
        cout << "Jestes pelnoletni ale nie mozesz zostac prezydentem.";
    }else{
        cout << "Jeste� niepelnoletni.";
    }

    return 0;
}

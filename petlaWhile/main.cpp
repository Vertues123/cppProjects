#include <iostream>

using namespace std;

int populacja=1, godzina=0;

int main()
{
   while(populacja<=1000000000){
        godzina++;
        populacja=populacja*2;

        cout << "Minelo godzin " << godzina << endl;
        cout << "Wilkosc populacji" << populacja <<endl;


   }
   return 0;
}

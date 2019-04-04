#include <iostream>

using namespace std;
long int silnia(int n){
    if(n==0) return 1;
    else return n*silnia(n-1);
}
int main()
{
    int x;
    cout << "Podaj silnie: !";
    cin>>x;
    cout<<endl<<silnia(x);
    return 0;
}

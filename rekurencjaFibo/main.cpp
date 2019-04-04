#include <iostream>

using namespace std;

long int fib(int n){
    if(n==1 || n==2) return 1;
    else return fib(n-1)+fib(n-2);
}

int main()
{
    int x;
    cout << "Podaj n'ty wyraz ciagu Fibonacciego: ";
    cin>>x;
    cout<<endl<<fib(x);
    return 0;
}

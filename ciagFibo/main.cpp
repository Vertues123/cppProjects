#include <iostream>
#include <iomanip>

using namespace std;
long double fib[1000], n;
int main()
{
    cout << "Ile liczb fibonacciego mam wyznaczyc." << endl;
    cin>>n;
    fib[0]=1;
    fib[1]=1;

    for(int i=2; i<n; i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    cout << setprecision(1000000);
    for(int i=0; i<n; i++){
        cout << endl << "Wyraz nr." << i+1 << ": " << fib[i];
    }
    return 0;
}

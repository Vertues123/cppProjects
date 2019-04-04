#include <iostream>

using namespace std;
int a;
int f(int n){
    if(n==0) return 3; //przypadek podstawowy|trywialny
    else return f(n-1)+2; //
}
int main()
{
    cin>>a;
    cout<<f(a);
    return 0;
}


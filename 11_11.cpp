#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cout << "NT10=" << n/10 << endl;
    n = n%10;
    cout << "NT5=" << n/5 << endl;
    n=n%5;
    cout << "NT1=" << n << endl;
}
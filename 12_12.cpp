#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double d, t;
    cin >> d;
    d *= 100;
    t = d/(100-30*2.54);
    cout << ceil(t) << endl;

}
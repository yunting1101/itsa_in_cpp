#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int mile;
    cin >> mile;
    double km = mile * 1.6;
    cout << fixed << setprecision(1) << km << endl;
}
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double width;
    cin >> width ;
    cout << fixed << setprecision(1) << round(width*width*10)/10.0 << endl;

    return 0;
}
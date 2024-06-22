#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int up,down,hight;
    cin >> up >> down >> hight;
    double area = ((up+down)*hight)/2.0;
    cout << fixed << setprecision(1) << "Trapezoid area:" << area << endl;

}
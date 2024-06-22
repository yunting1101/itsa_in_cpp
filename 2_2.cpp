#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int down,hight;
    cin >> down >> hight;
    double area = (down*hight)/2.0;
    cout << fixed << setprecision(1) << area << endl;
}
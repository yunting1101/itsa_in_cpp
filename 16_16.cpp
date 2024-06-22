#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    if(x*x <= 10000 && y*y <= 10000){
        cout << "inside" << endl;
    }
    else{
        cout << "outside" << endl;
    }
}
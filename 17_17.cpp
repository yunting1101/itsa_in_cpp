#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin >> x >> y;
    if(y > x){
        int temp = x;
        x = y;
        y = temp;
    }
    for(int i = y ; i >= 1 ; i--){
        if(x%i == 0 && y%i == 0){
            cout << i << endl;
            break;
        }
    }

}
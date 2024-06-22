#include <iostream>
using namespace std;

int main(){
    int i, ans=1;
    cin >> i;
    if(i < 31){
        for(int j = 1; j <= i ; j++){
            ans *= 2;
        }
        cout << ans << endl;
    }
    else
        cout << "Value of more than 31" << endl;

}
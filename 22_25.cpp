#include <iostream>
using namespace std;

int main(){
    int n,i,sum=0;
    cin >> n;
    for(i = 1 ; i <= n ; i++){
        if(i%3 == 0)
            sum += i;
    }
    cout << sum << endl;

}
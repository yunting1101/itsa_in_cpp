#include <iostream>
using namespace std;

int main(){
    int n, i;
    long long int sum = 1;
    cin >> n;
    for(i =  1; i <= n ; i++){
        sum *= i;
    }
    cout << sum << endl;

}
#include <iostream>
using namespace std;

int main(){
    int x,i,j;
    int isprime = 0;
    cin>>x;
    for(i = x-1 ; i >= 2 ; i--){
        isprime = 1;
        for(j = 2 ; j < i ; j++){
            if(i%j == 0){
                isprime = 0;
                break;
            }
        }
        if(isprime == 1){
            cout<<i<<endl;
            break;
        }
    }
}
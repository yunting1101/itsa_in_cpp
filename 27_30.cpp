#include <iostream>
using namespace std;

int main(){
    int a = 0, check = 0;
    cin>>a;
    for(int i = 2 ; i < a ; i++){
        if(a%i == 0){
            check = 1;
        }
    }
    if(check == 0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
}
#include <iostream>
using namespace std;

int main(){
    int a = 0,b = 0,sum = 0;
    cin>>a>>b;
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    for(int i = a ; i <= b ; i++){
        sum += i;
    }
    cout<<sum<<endl;
}
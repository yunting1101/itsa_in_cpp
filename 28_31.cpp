#include <iostream>
using namespace std;

int main(){
    int a = 0,sum = 0;;
    cin>>a;
    for(int i = 1 ; i <= a ; i++){
        if(i%6 == 0 && i%12 != 0){
            sum += i;
        }
    }
    cout<<sum<<endl;
}
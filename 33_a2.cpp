#include <iostream>
using namespace std;

int main(){
    int a[6];
    int i;
    for(i = 0 ; i < 6 ; i++){
        cin>>a[i];
    }
        
    for(i = 5 ; i >= 0 ; i--){
        if(i==0){
            cout<<a[i];
        }
        else{
            cout<<a[i]<<" ";
        }
    }
    cout<<endl;

}
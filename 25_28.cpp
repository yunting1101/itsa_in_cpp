#include <iostream>
using namespace std;

int main(){
    int a = 0;
    cin>>a;
    for(int i = 1; i <= a; i++){
        if(i%35 == 0){
            if(i == 35){
                cout<<i;
            }
            else{
                cout<<" "<<i;
            }
        }
    }
    cout<<endl;
    
}
#include <iostream>
using namespace std;

int main(){
    int a = 0;
    cin>>a;
    if(a%4 == 0){
        if(a%400 == 0){
            cout<<"Bissextile Year\n";
        }
        else{
            cout<<"Common Year\n";
        }
        
    }
    else{
        cout<<"Common Year\n";
    }
    
}
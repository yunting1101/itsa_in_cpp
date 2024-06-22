#include <iostream>
using namespace std;

int main(){
    int a[6], ans = 0;
    for(int i = 0 ; i < 6 ; i++){
        cin>>a[i];
        ans += (a[i] * a[i] * a[i]);
    }
    cout<<ans<<endl;

}
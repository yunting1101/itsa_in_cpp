#include <iostream>
using namespace std;

int main(){
    int s,d,h,min,sec;
    cin >> s;
    d = s/86400;
    h = (s%86400)/3600;
    min = (s%3600)/60;
    sec = s%60;
    cout << d << " days" << endl;
    cout << h << " hours" << endl;
    cout << min << " minutes" << endl;
    cout << sec << " seconds" << endl;

}
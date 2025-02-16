#include <iostream>
using namespace std;
int main(){
    float p,t,r,SI;
    cout << "Enter principal amount:";
    cin >> p;
    cout << "Enter time:";
    cin >> t;
    cout << "Enter rate of interest:";
    cin >> r;
    SI=(p*t*r)/100;
    cout << "Simple Interest is :" << SI;
}
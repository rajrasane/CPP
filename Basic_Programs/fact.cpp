#include<iostream>
using namespace std;

int factcalci(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    cout << factcalci(7) << endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int count = 1;
    int tmp;
    int a = 0 , b = 1 ;
    while (count != 11)
    {
        cout << a << " " ;
        tmp = a+b;
        a = b;
        b = tmp;
        count ++;
    }
    
}
// Write a C++ program to find the sum of first n natural numbers

#include <iostream>
using namespace std;

int main(){
    int i,n,sum=0;
    cout << "Enter a number :";
    cin >> n;
    for(i=1;i<=n;i++){
        sum += i;
    }
    cout << "Sum of first " << n << " natural numbers is " << sum << endl;
}
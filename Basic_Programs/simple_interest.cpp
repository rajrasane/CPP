#include<iostream>
using namespace std;
int main(){
    float prin,rate,time;
    cout << "Enter pricipal amount :- ";
    cin >> prin ;
    cout << "Enter rate of interest :- ";
    cin >> rate ;
    cout << "Enter time :- ";
    cin >> time ;
    float result = (prin*rate*time)/100;
    cout << "The simple interest for the above values are :- " << result << endl;
    return 0;
}
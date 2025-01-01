#include<iostream>
using namespace std;

int main(){
    char chr;
    cout << "Enter which character you want :- " << endl;
    cin >> chr ;
    cout << "It's next character :- " << endl;
    cout << char(chr+1) << endl;
    return 0; 
}
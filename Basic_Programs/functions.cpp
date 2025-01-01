#include<iostream>
using namespace std;

// User Defined
void disp(){
    cout << "Hello" << endl;
}

int main(){
    string name = "Ashutosh";
    cout << name.length() << endl ;
    cout << name.find('o') << endl;
    cout << name.substr(4,4) << endl;

    disp();

    return 0;
}


// Write a C++ program to find the length of a string

#include <iostream>
using namespace std;

int main (){
    char str[15];
    int i,cnt=0;
    cout << "Enter a string :";
    cin >> str;
    for(i=0;str[i]!='\0';i++){
        cnt++;
    }
    cout << "Length of the string  " << str << " is " << cnt << endl;
    
}
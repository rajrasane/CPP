#include <iostream>
using namespace std;

//  define a class
class student 
{
    int rollno;
    char name[10];
    float marks;
public:
    // public member functions
    void accept();
    void display();
};

// accept function definition
void student::accept(){
    cout << "Enter rollno, name and marks: ";
    cin >> rollno >> name >> marks;
}

// display function definition
void student::display(){
    cout << "Roll No: " << rollno << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
}

// main function
int main(){
    // creating object of class student
    student s;    
    
   // calling functions
    s.accept();    
    s.display();
    return 0;
}
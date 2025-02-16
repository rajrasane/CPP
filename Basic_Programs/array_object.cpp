// Array of Objects

#include<iostream>
using namespace std;

class date{
    int dd,mm,yyyy;
    public :
        void accept();
        void display();
};

class student{
    int rno ;
    string name;
    date bdate;
    float perc;
    public :
        void accept();
        void display();
} ; 

void date :: accept(){
    cin >> dd >> mm >> yyyy ;
}

void date :: display(){
    cout << dd<<"/"<<mm<<"/"<<yyyy<<endl;
}

void student :: accept(){
    cout << "\n\n";
    cout << "Enter Student Roll No :- " << endl;
    cin >> rno;
    cout << "Enter student name :- " << endl;
    cin >> name;
    cout << "Enter student Birth Date (format :- dd/mm/yyyy) :- " << endl;
    bdate.accept();
    cout << "Enter student percentage :- " << endl;
    cin >> perc;
}

void student :: display(){
    cout << endl << endl;
    cout  << "Roll No = " << rno << endl;
    cout << "Name = " << name << endl;
    cout << "Birth Date = " ;  bdate.display() ;
    cout << "Percentage = " << perc << endl;

}

int main(){
    int i,n;
    student s[10];
    cout << "Enter how many students record do you want to enter = " << endl ;
    cin >> n;
    for(i=0;i<n;i++){ 
        s[i].accept();
    }
    cout << "\n\n" ;
    cout << "Student Details = " << endl ;
    for(i=0;i<n;i++){
        s[i].display();
    }
    return 0;
}
#include<iostream>
using namespace std;
class date{
    int dd,mm,yy;
    public:
        void accept();
        void display();
    };

class student {
    int rollno;
    char name[20];
    date dob;
    float marks;
     public:
        void accept();
        void display();
};

void date::accept(){
    cout << "Enter date, month and year: ";
    cin >> dd >> mm >> yy;
}

void date::display(){
    cout << dd << "/" << mm << "/" << yy;
}

void student::accept(){
    cout << " Enter rollno, name : ";
    cin >> rollno >> name;
    dob.accept();
    cout << " Enter marks :";
    cin >> marks;
}


void student::display(){
    cout << endl<<endl;
    cout << " Roll NO : " << rollno << endl;
    cout << " Name : " << name << endl;
    cout << " Date of Birth : ";
    dob.display();
    cout << "\n Marks :"<< marks << endl;

}

int main(){
    student s[10];
    int i,n;
    cout << " Enter number of students:";
    cin >> n;
    for(i=0;i<n;i++)
        s[i].accept();
    cout << "\n Students Details Are : \n";
    for(i=0;i<n;i++)
        s[i].display();
    return 0;
}
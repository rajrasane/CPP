#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;
    string city;
    int pinCode;

public:
    Person(string n, int a, string c, int p) {
        name = n;
        age = a;
        city = c;
        pinCode = p;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "City: " << city << endl;
        cout << "Pin Code: " << pinCode << endl;
    }
};

int main() {
    Person p("John Doe", 25, "New York", 10001);

    p.display();

    return 0;
}

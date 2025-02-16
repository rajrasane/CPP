#include <iostream>
using namespace std;

class Calculation {
private:
    int num1, num2;

public:
    // Function to initialize num1 and num2
    void initialize(int a, int b) {
        num1 = a;
        num2 = b;
    }

    // Function to add num1 and num2
    int add() {
        return num1 + num2;
    }

    // Function to subtract num2 from num1
    int subtract() {
        return num1 - num2;
    }

    // Function to multiply num1 and num2
    int multiply() {
        return num1 * num2;
    }

    // Function to divide num1 by num2
    float divide() {
        if (num2 != 0) {
            return static_cast<float>(num1) / num2;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculation calc;
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    calc.initialize(a, b);

    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    cout << "Division: " << calc.divide() << endl;

    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Calculator {
public:
    double a, b;
    string operation;

    void calculate() {
        if (operation == "+") {
            cout << "Result = " << a + b;
        }
        else if (operation == "-") {
            cout << "Result = " << a - b;
        }
        else if (operation == "*") {
            cout << "Result = " << a * b;
        }
        else if (operation == "/") {
            if (b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Division by zero is not allowed";
        }
        else {
            cout << "Invalid operation";
        }
    }
};

int main() {
    Calculator c;

    cout << "Enter value of a: ";
    cin >> c.a;

    cout << "Enter value of b: ";
    cin >> c.b;

    cout << "Enter operation (+, -, *, /): ";
    cin >> c.operation;

    c.calculate();

    return 0;
}





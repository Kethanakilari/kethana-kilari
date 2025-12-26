#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter value of a: ";
    cin >> a;

    int number = 1;

    for (int i = 1; i <= a; i++) {
        cout << number << " ";
        number = number + 2;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter value of a: ";
    cin >> a;

    int limit;
    if (a % 2 == 0)
        limit = a - 1;
    else
        limit = a;

    int number = 1;

    for (int i = 1; i <= limit; i++) {
        cout << number << " ";
        number = number + 2;
    }

    return 0;
}
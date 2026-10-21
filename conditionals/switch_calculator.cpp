#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Enter an expression (e.g. 10 + 5): ";
    cin >> a >> op >> b;

    switch (op) {
        case '+':
            cout << "Result: " << a + b;
            break;

        case '-':
            cout << "Result: " << a - b;
            break;

        case '*':
            cout << "Result: " << a * b;
            break;

        case '/':
            if (b != 0) {
                cout << "Result: " << a / b;
            } else {
                cout << "Cannot divide by zero";
            }
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}

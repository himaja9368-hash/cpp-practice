#include <iostream>
using namespace std;

// Function definition
int add(int a, int b) {
    return a + b;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    // Function call
    int result = add(x, y);

    cout << "Sum: " << result << endl;

    return 0;
}

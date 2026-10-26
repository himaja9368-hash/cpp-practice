#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {10, 25, 5, 40, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum element: " << *max_element(arr, arr + n) << endl;
    cout << "Minimum element: " << *min_element(arr, arr + n) << endl;

    return 0;
}

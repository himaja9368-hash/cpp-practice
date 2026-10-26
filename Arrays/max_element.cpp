#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 5, 40, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxElement = arr[0];
    int minElement = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement)
            maxElement = arr[i];

        if (arr[i] < minElement)
            minElement = arr[i];
    }

    cout << "Maximum element: " << maxElement << endl;
    cout << "Minimum element: " << minElement << endl;

    return 0;
}

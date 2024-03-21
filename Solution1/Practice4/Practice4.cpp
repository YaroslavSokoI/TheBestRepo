#include <iostream>
#include <algorithm>
using namespace std;

const int ARRAY_SIZE = 10;

int binarySearch(int arr[], int size, int x) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        cout << "Left: " << left << ", Right: " << right << ", Mid: " << mid << endl;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
    }

    cout << endl;
    return -1;
}

int main() {
    int arr[ARRAY_SIZE];
    cout << "Enter " << ARRAY_SIZE << " elements:" << endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the value for search: ";
    cin >> x;
    cout << endl;

    sort(arr, arr + ARRAY_SIZE);

    cout << "Array after sorting:" << endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    int result = binarySearch(arr, ARRAY_SIZE, x);
    if (result != -1) {
        cout << "Element found at index " << result << endl << endl;
    }
    else {
        cout << "Element not found" << endl << endl;
    }

    reverse(arr, arr + ARRAY_SIZE);

    cout << "Reversed array:" << endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
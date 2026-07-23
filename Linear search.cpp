#include <iostream>
using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    // Loop through every element of the array
    for (int i = 0; i < size; i++) {
        // If element is found, return its index
        if (arr[i] == target) {
            return i;
        }
    }
    // Return -1 if the element is not found
    return -1;
}

int main() {
    int n, target;

    // Ask user for the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Ask user for the element to search
    cout << "Enter the element to search for: ";
    cin >> target;

    // Call the linearSearch function
    int result = linearSearch(arr, n, target);

    // Output the result
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

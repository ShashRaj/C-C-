#include <iostream>
using namespace std;

void printUnique(int arr[], int size) {
    cout << "Unique values: ";
    for (int i = 0; i < size; i++) {
        bool isUnique = true;

        // Check if arr[i] appears elsewhere
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j])
            /*
            This condition checks two things:

            i != j: Ensures we’re not comparing the same index (we don’t want to compare an element with itself).
            arr[i] == arr[j]: Checks if the values at different indices are the same — meaning the value is repeated somewhere else in the array.

            */ {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printUnique(arr, size); // will not return, will print the things.

    return 0;
}

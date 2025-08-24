#include <iostream>
using namespace std;

void printIntersection(int arr1[], int arr2[],int size) {
    cout << "Intersection values: ";
    for (int i = 0; i < size; i++) {
        bool isPresent = false;

        // Check if arr[i] appears elsewhere
        for (int j = 0; j < size; j++) {
            if (arr1[i] == arr2[j])
            {
                isPresent = true;
                break;
            }
        }

        if (isPresent) {
            cout << arr1[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 2, 4, 5, 1};
    int arr2[] = {1, 2, 3, 2, 4, 5, 1};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    printIntersection(arr1, arr2, size); // will not return, will print the things.

    return 0;
}

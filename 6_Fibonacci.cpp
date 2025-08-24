#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int a = 0, b = 1;
    // a = current number , b = Next number
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; i++) {
        cout << a << " "; //printing current
        int next = a + b; // current + next
        a = b; // updating current to next what will be the current
        b = next; // updating it the next number
    }

    cout << endl;
    return 0;
}

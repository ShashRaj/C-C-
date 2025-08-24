// Increment ++
#include <iostream>
using namespace std;
int main ()
{
    int a = 10;

    int b = a++;

    cout << "B: " << b << " A : " << a << "\n";

    // Decrement --

    b = a--;
    a = --a;
    cout << "B: " << b << " A : " << a << "\n";
    return 0;
}
// Decrement --



#include <iostream>
using namespace std;

int main ()
{
    int age;
    cout << age << endl; // it will print garbage value

    cout << "Enter the number" << endl;
    cin >> age;
    cout <<"the number is: " << age << endl;

    return 0;
}
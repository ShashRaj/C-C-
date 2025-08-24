#include <iostream>
using namespace std;


int main()
{

    int age = 10; // int = 4 bytes = 32bits
    cout << "age" << age << endl;
    cout << sizeof(age) << endl;

    char a = 'a'; // 1 byte
    cout << a << endl;

    float PI = 3.14f; //4 byre
    cout << PI << endl;

    bool isSafe = false; // 1byte
    cout << isSafe << endl;

    double d = 8.199;
    cout << d << endl;
    cout << sizeof(d) << endl;



    return 0;

}
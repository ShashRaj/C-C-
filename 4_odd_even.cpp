#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    if (num & 1) //Last digit of the binary is 1 for odd , so performing and bitwise with 1, will give 1
    {
       cout << " odd";
    } else {
        cout << "even";
    }

    cout << "endl";

    return 0;
}
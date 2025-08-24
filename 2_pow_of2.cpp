#include<iostream>
using namespace std;

bool isPowerof2 (int num)
{
    if (num <= 0)
    {
        return false;
    }

    return ((num & (num - 1)) == 0 ? true : false); // operator precendence
// num = 4 , 0100
// num - 1 = 3, 0011 --> performing & on both, give 0.
}

int main()
{
    int n;
    cout << "enter the number: " << endl;
    cin >> n;

    if(isPowerof2(n))
    {
        cout << n << " It is a power of 2" << endl;
    }
    else
    {
        cout << "No its not";
    }
    return 0;
}
#include<iostream>
using namespace std;
// Binary to Decimal

int BinarytoDec (int binarynum)
{
    int rem =0, pow = 1;
    int ans = 0;
    while(binarynum > 0)
    {

    rem = binarynum % 10;
    ans += rem * pow;

    binarynum /= 10; //storing the quotient
    pow *= 2; // increasing with 2 power
    }

    return ans;
}

int main()
{
    int binary = 1000;
    cout << "Decimal Number " << BinarytoDec(binary) << endl;
    return 0;
}
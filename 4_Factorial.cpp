#include<iostream>
using namespace std;

int factorial (int a)
{
    int fact = 1;
    for (int i=1; i<=a; i++)
    {
        fact *= i;
    }
}

int nCr(int n, int r)
{
    int N = factorial(n);
    int D = factorial(r);
    int d = factorial(n-r);

    return N/D * d;
}
int main()
{
    int n,r =0;
    cout << "Enter the value of N: " << endl;
    cin >> n;

    cout << "Enter the value of R: " << endl;
    cin >> r;

    cout << endl;

    cout << "The value of N = " << n << ", R = " << r << ", nCr = " << nCr(n, r) << endl;


    return 0;
}
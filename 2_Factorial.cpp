#include<iostream>
using namespace std;

int printFactorial(int a)
{
    int fact = 1;

    for(int i=1;i<=a;i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    cout << printFactorial(5) << endl;    
    return 0;
}
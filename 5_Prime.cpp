#include<iostream>
using namespace std;

// 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
bool isPrime(int n)
{
    for (int i=2 ; i*i <= n;i++)
    {
        if (n%i == 0)
        {
            return false;
        }
    }
    return true;
}

void primeNumber (int total_num)
{
    for (int i = 2;i <= total_num; i++)
    {
        if(isPrime(i))
        {
            cout << i << " "; 
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;

    primeNumber(n);


    return 0;
}
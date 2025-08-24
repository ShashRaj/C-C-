#include<iostream>
using namespace std;


int sumofdigits(int num)
{
    int DIgitsSUm = 0;

    while (num > 0)
    {
        int last_digit = num % 10;
        num/= 10;
        DIgitsSUm += last_digit;
    }
    return DIgitsSUm;
}
int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;

    cout << sumofdigits(n) << endl;
    return 0;
}
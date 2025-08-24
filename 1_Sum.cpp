#include<iostream>
using namespace std;

int printsum(int a)
{
    int sum = 0;

    for(int i=0;i<a;i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    cout << printsum(10) << endl;    
    return 0;
}
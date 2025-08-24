#include<iostream>
using namespace std;
int main()
{
    // sum of 1 to n
    int N;
    cout << "enter a number\n";
    cin >> N;
    int sum = 0;
    for (int i=1; i<=N ; i++)
    {
        sum += i;;;;;
        if( i == 5)
        {
            break;
        }
        
    }

    cout << "Total Sum is: " << sum;
    return 0;
}
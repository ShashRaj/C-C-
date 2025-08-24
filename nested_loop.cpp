#include<iostream>
using namespace std;
int main()
{
    // nested loop
    for (int i = 1 ; i<=5;i++) //outer loop , number of rows / lines
    {
        int stars = 10;
        for (int j = 1 ; j<=stars;j++) // inner loop, number of columns
        {
            cout << "*";
            
        }
        cout << endl;
    }
    return 0;
}
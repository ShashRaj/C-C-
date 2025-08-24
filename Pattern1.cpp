#include<iostream>
using namespace std;
/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/
int main()
{
    int n;
    cout << " Enter the number n: " << endl;
    cin >> n;
    cout << endl;

    for(int i = 0; i < n ; i++) // outer loop
    {
        for(int j = 0; j < n; j++) // inner
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}
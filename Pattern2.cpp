#include<iostream>
using namespace std;
/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5

*/
int main()
{
    int n;
    cout << " Enter the number n: " << endl;
    cin >> n;
    cout << endl;

    for(int i = 1; i <=n ; i++) // outer loop
    {
        for(int j = 1; j <=n; j++) // inner
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
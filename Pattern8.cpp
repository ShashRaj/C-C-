#include<iostream>
using namespace std;
/*
1 
1 2
1 2 3
1 2 3 4
*/
int main()
{
    int n;
    cout << "Enter the number: "  << endl;
    cin >> n;
    int temp = 1;

    for (int i = 1; i<=n; i++)
    {
        temp = 1;
        for(int j = 1; j<i+1 ; j++)
        {
            cout << temp << " ";
            temp++;
        }
        cout << endl;
    }
    cout << endl;

    //else logic

    for (int i = 1; i<=n; i++)
    {
        for(int j = 1; j<i+1 ; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
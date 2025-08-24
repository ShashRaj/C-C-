#include<iostream>
using namespace std;
/*
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
7 7 7 7 7 7 7
8 8 8 8 8 8 8 8
9 9 9 9 9 9 9 9 9
10 10 10 10 10 10 10 10 10 10
*/
int main()
{
    int n;
    cout << "Enter the number: "  << endl;
    cin >> n;

    for (int i = 1; i<=n; i++)
    {
        for(int j = 1; j<i+1 ; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
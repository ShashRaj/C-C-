#include<iostream>
using namespace std;
/*
1
2 3
4 5 6
7 8 9 10
*/
int main()
{
    int n;
    cout << "Enter the number: "  << endl;
    cin >> n;
    cout << endl;
    int temp = 1;

    for(int i = 0; i< n; i++)
    {
        for (int j =0; j < i+1; j++)
        {
            cout << temp << " ";
            temp++;
        }
        cout << endl;
    }
    return 0;
}
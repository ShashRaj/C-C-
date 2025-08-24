#include<iostream>
using namespace std;
/*
A
B C
D E F
G H I J
*/
int main()
{
    int n;
    cout << "Enter the number: "  << endl;
    cin >> n;
    cout << endl;
    char ch = 'A';

    for(int i = 0; i< n; i++)
    {
        for (int j =0; j < i+1; j++)
        {
            cout << ch << " ";
            ch += 1;
        }
        cout << endl;
    }
    return 0;
}
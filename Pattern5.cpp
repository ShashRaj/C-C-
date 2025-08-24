#include<iostream>
using namespace std;
/*
A B C
D E F
G H I
*/
int main()
{
    int n;
    cout << " Enter the number n: " << endl;
    cin >> n;
    cout << endl;

    char ch = 'A';

    for(int i = 0; i <n ; i++) // outer loop
    {
        for(int j = 0; j <n; j++) // inner
        {
            cout << ch << " ";
            ch +=1; // incrementing the ascii value
        }
        cout << endl;
    }
    
    cout << ch << endl;

    return 0;
}
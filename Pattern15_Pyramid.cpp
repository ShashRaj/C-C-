#include<iostream>
using namespace std;
//Inverted triangle (Space + Number)
/*
    1
   121
  12321
 1234321
123454321
*/
int main()
{
    int n;
    cout << "Enter the number: "  << endl;
    cin >> n;
    cout << endl;

    for(int i = 0; i< n; i++)
    {
        //Space
        for (int j =0; j < (n-i-1); j++)
        {
            cout << " ";
        }
        //Number
        for (int j =0; j < (i+1); j++)
        {
            cout << j+1;
        }
        // reverse number 3 2 1
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
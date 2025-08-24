#include<iostream>
using namespace std;
//Inverted triangle (Space + Number)
/*
1111
 222
  33
   4
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
        for (int j =0; j < i; j++)
        {
            cout << " ";
        }
        //Number
        for (int j =0; j < n - i; j++)
        {
            cout << i+1;
        }
        cout << endl;
    }
    return 0;
}
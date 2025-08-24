#include<iostream>
using namespace std;
//Inverted triangle (Space + Alphabet   )
/*
AAAA
 BBB
  CC
   D
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
        //Space
        for (int j =0; j < i; j++)
        {
            cout << " ";
        }
        //Alphabet
        for (int j =0; j < n - i; j++)
        {
            cout << ch;
            //ch++; //remove this and see the difference
        }
        ch++;
        cout << endl;
    }
    return 0;
}
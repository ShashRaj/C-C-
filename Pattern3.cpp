#include<iostream>
using namespace std;
/*
A B C D
A B C D
A B C D
A B C D
*/
int main()
{
    int n;
    cout << " Enter the number n: " << endl;
    cin >> n;
    cout << endl;

    for(int i = 0; i < n ; i++) // outer loop
    {
        char ch = 'A'; // declare inside the outer loop,
        for(int j = 0; j < n; j++) // inner
        {
            cout << ch << " "; //character is stored in the way of ASCII value
            ch += 1; // increment the ascii value of A to B(66)
        }
        cout << endl;
    }
    return 0;
}
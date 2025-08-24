#include<iostream>
using namespace std;
/*
* 
* *
* * *
* * * *
*/
int main()
{
    int n;
    int temp = 1;
    cout << "Enter the number: "  << endl;
    cin >> n;
    for(int i = 0; i<n; i++)
    {  
        for(int j=0; j < temp;j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
        temp++;
    }
    cout << endl;
    //another logic

    for (int i =0; i <=n ; i++)
    {
        for (int j=0; j<i; j++) // here no. rows is the no. of stars hence comapre with i(rows) to j (columns)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
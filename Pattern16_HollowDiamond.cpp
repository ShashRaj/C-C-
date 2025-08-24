#include<iostream>
using namespace std;

/*
   *
  * *
 *   *
*     *
 *   *
  * *
   *
*/
int main()
{
    int n;
    cout << "Enter the number: "  << endl;
    cin >> n;
    cout << endl;
    //loop for top part
    for(int i = 0; i<n;i++)
    {
        for (int j =0; j < n-i-1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if(i!=0)
        {
            for(int j =0; j < 2*i-1 ; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
        
    }
    // loop for bottom part

    for ( int i =0; i<n-1 ; i++)
    {
        for (int j = 0; j < i+1;j++)
        {
            cout << " ";
        }
        cout << "*";
       if(i != n-2)
       {
        for (int j=0; j< 2*(n-i)-5;j++)
        {
            cout << " ";
        }
        cout << "*";
       }
       
       cout << endl;
    }
    
    return 0;
}
#include<iostream>
#include <climits>
using namespace std;
int main()
{
    //Getting the smallest number in the array

    int num[5] = {};
    int smallest = INT_MAX;

    cout << "Please enter the 5 number.";
    for ( int i = 0 ; i < 5 ; i++)
    {
        cin >> num[i];
    }

    for (int i=0; i<5 ; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }

    for (int i = 0; i< 5; i++)
    {
        //using min function

        smallest = min(num[i],smallest);
    }

    cout << "Smallest Number is: " << smallest << endl;


    return 0;
}
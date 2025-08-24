#include <iostream>
#include <climits>
using namespace std;
int main()
{
    //Getting the smallest number in the array

    int num[5] = {};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int small_index , large_index = 0 ;

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
            small_index = i;
        }

        if (num[i] > largest)
        {
            largest = num[i];
            large_index = i;
        }
    }
    
    for (int i = 0; i< 5; i++)
    {
        //using min function

        smallest = min(num[i],smallest);
        largest = max(num[i],largest);
    }

    cout << "Smallest Number is: " << smallest << "Small Index" << small_index << endl;
    cout << "Largest Number is: " << largest << "Large Index" << large_index <<endl;
    return 0;
}
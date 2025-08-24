#include<iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int minIndex, maxIndex = 0;

    for (int i = 0; i<5 ;i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
            minIndex = i;
        }
        if(arr[i] > largest)
        {
            largest = arr[i];
            maxIndex = i;
        }
    }

    cout << smallest << endl;
    cout << largest << endl;
    
    //Swapping
    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    for(int i=0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}
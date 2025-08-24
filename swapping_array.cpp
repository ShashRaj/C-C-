#include<iostream>
using namespace std;
int main()
{
    // reverse an original array
    //using 2 pointer approach

    int arr[] = {1,2,3,4,5,4,0,4};

    int start = 0;
    int end = ((sizeof(arr))/sizeof(int)) - 1;

    while( start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

    /*
        to do it without swap function

        while( start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }

    */
    int size = sizeof(arr)/sizeof(int);

    for(int i = 0; i < size ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;


    return 0;
}
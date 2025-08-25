#include<iostream>
using namespace std;

void selectionSort (int arr[] , int n)
{   
    
    for (int i =0; i<n-1; i++)
    {
        int minIndex = i; //assume minimum number is at index 0
        for (int j= i+1 ; j< n;j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j; //which is not i = 0
            }
        }

        // need to update the actual postion of the lower minimum number at index i = 0
        int temp = arr[i];
        arr[i] = arr[minIndex]; // swapping the real minimum element at index i = 0
        arr[minIndex] = temp;
    }
}
int main()
{
    int arr[7] = {1,6,3,5,6,64,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr,n);

    for(int i =0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
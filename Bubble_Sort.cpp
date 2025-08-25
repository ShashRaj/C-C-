#include<iostream>
using namespace std;

void bubbleSort(int arr[] , int n)
{
    for(int i = 0; i < n-1 ; i++) // n-1 same as selection sort , as after 1st iteration, largest number will be at end
    {
        for(int j = 0; j < n-i-1 ; j++) // remember the logic n-i-1
        {
            if(arr[j] > arr[j+1]) // compare betn i , i+1 pair and do swapping
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j]; //swapping the highest element of the pair to higher indice
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int arr[] = {2,4,63,23,6,74,37,453};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr,n);

    for(int i =0; i < n;i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
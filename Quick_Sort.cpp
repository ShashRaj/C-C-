#include<iostream>
#include <vector>
using namespace std;

//Time Complexity : O(nlogn)
// worst case  : O(n^2) // when the pivot is smallest or largest
//Space complexity : O(1) == Merge sort has O(n)
//Function  to create  a partion arounf the pivot
// Left Half --- Pivot --- Right Half

int partition (vector <int> &arr, int st , int end)
{
    int idx = st - 1 , pivot = arr[end];

    for (int j=st; j<end;j++)
    {
        if(arr[j] >= pivot) // change the condition to chnage the array to Descending order and Ascending order
        {
            idx++;
            swap(arr[j],arr[idx]);
        }
    }
    idx++;
    swap(arr[end],arr[idx]); // end pivot value with updated idx
    return idx;
}
void quickSort(vector <int> &arr, int st , int end)
{
    if (st < end)
    {
        int pivIdx = partition(arr,st,end);
        // need to use recurion here

        quickSort(arr,st,pivIdx-1); //left half
        quickSort(arr,pivIdx+1,end); // right half 
    }
}

int main()
{
    vector <int> arr = {12,31,35,8,32,17};

    quickSort(arr,0,arr.size()-1);

    for(int val : arr)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
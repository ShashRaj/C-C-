#include<iostream>
using namespace std;

int linear_search(int arr[], int size, int target)
{
    for ( int i = 0; i<size ; i++)
    {
        if (arr[i] == target)
        {
            cout << "function: " << arr[i] << endl;
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int target = 4;

    int retVal = 1;

    retVal = linear_search(arr,5,target);

    if(retVal == -1)
    {
        cout << "Number is not present\n";
    }
    else
    {
        cout << "Index Value is at: " << retVal;
    }
    cout << endl;

    return 0;
}
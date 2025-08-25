#include<iostream>
#include <vector>
using namespace std;

int binarySearch(vector <int> &arr, int tar)
{
    int st = 0, end = arr.size()-1;

    while(st <=end)
    {
        //int mid = (st+end)/2;
        int mid = st + (end -st)/2; // used formula to claculate mid to save from overflowing

        if (tar > arr[mid]) st = mid + 1;
        else if (tar < arr[mid]) end = mid -1;
        else return mid;
    }
    return -1;

}
int main()
{
    
    vector <int> arr = {-1,0,3,4,5,9,12}; // odd and sorted
    int tar1 = 12;

    vector <int> arr1 = {-1,0,3,5,9,12}; // even and sorted
    int tar2 = 2;

    int position_index = binarySearch(arr1,tar2);

    if(position_index == -1) cout << "NOT PRESENT";

    cout << "Index : " << position_index << " " << "Value : " << arr.at(position_index) << endl;

    return 0;
}
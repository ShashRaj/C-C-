#include<iostream>
#include <vector>
using namespace std;

int LinearSearch(vector <int> &arr, int tar)
{
    for(int i = 0; i< arr.size() ;i++)
    {
        if (arr[i] == tar)
        {
            return i;
        }
    }
    return -1;


}
int main()
{
    
    vector <int> arr = {-1,0,3,4,5,9,12}; // odd and sorted
    int tar1 = 12;

    vector <int> arr1 = {-1,0,3,5,9,12}; // even and sorted
    int tar2 = 0;

    int position_index = LinearSearch(arr1,tar2);

    if(position_index == -1) cout << "NOT PRESENT";

    cout << "Index : " << position_index << " " << "Value : " << arr.at(position_index) << endl;

    return 0;
}
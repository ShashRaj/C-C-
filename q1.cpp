// WAP to calculate sum and product of all numbers in an array

#include<iostream>
using namespace std;

int sum_arr(int arr[] , int size)
{
    int sum = 0;

    for ( int i = 0 ; i < size ; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int prod_arr ( int arr[] , int size)
{
    int prod = 1;

    for (int i=0; i<size; i++)
    {
        prod *= arr[i];
    }
    return prod;
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int size = 5;

    int total_sum = sum_arr(arr,size);
    int prod = prod_arr(arr,size);

    cout << total_sum << endl;
    cout << prod << endl;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int marks[5] = {99,12,43,54,34};

    double price[] = {98.99,105.34,23.003};

    cout << *(&price[0]) << " " << price[0] << endl;

    // calculate number of elements in marks

    int elements = sizeof(marks)/sizeof(int); // it will gice quotient

    cout << "Number of elements " << elements << endl;
    // write in the array 

    for (int i = 0; i < elements ; i++)
    {
        cin >> marks[i];
    }

    //to print using for loop
    for (int i =0 ; i < elements ; i++)
    {
        cout << marks[i] << endl; 

    }
    return 0;
}
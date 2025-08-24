#include<iostream>
#include <vector> // part od STL library
using namespace std;
int main()
{

    // three ways to declare vector

    vector<int> vec2;

    vector<int> vec = {1,2,3};
    cout << vec[0] <<endl;

    vector<int> vec1(5,0);
    cout << vec1[0] <<endl;
    cout << vec1[1] <<endl;
    cout << vec1[2] <<endl;
    cout << vec1[3] <<endl;
    cout << vec1[4] <<endl;
    
    return 0;
}
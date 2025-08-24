#include<iostream>
#include <vector>
using namespace std;
int main()
{   
    vector<int> vec = {1,2,3,4,56,6};

    for (int i : vec)
    {
        cout << i << endl;
    }

    vector<char> vec2 = {'a','b'};
    

    cout << "size: " << vec.size() << endl;
    vec2.push_back('d');

    for (char c : vec2)
    {
        cout << c << endl;
    }

    vec2.pop_back();
    cout << "After pop back\n" ;
    for (char c : vec2)
    {
        cout << c << endl;
    }

    cout << "Front:" << vec2.front() << endl;
    cout << endl;

    cout << "at " << vec2.at(0) << endl;
    return 0;
}
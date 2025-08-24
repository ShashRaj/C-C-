#include<iostream>
using namespace std;
/*
123
456
789
*/
int main()
{
    int n;
    cout << " Enter the number n: " << endl;
    cin >> n;
    cout << endl;

    int num = 1;
    for(int i = 0; i <n ; i++) // outer loop
    {
        for(int j = 0; j <n; j++) // inner
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    
    cout << num << endl;

    return 0;
}
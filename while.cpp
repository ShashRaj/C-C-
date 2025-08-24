#include<iostream>
using namespace std;
int main()
{
    int N = 50;
    int oddsum = 0;
    int evensum = 0;
    int i = 1;


    while(i<=N)
    {
        if ((i%2) != 0)
        {
            oddsum += i;
        }
        else
        {
            
            evensum += i;
        }
        i++;
    }

    cout << oddsum << " " << evensum << " ";
    return 0;
}
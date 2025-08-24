#include<iostream>
using namespace std;
int main()
{
    
    /*
    int age;

    cout << "Enter your age.";
    cin >> age;

    
    if(age >= 18)
    {
        cout << "You can vote\n";
    }
    else
    {
        cout << "You cannot vote\n";
    }

    //ternary operator

    cout << (age >= 18 ? "Can Vote" : "Cannot Vote");
    */

    //while loop

    int count = 1;

    while(count <=5 )
    {
        if (count == 3)
        {
            count++;
            continue;
        }
        cout << count;
        cout << endl;
        count++;
    }

    //infinite loop

    //for loop

    for (int i = 0; i<=5; i++)
    {
        cout << i;
        cout << endl;
    }
    return 0;
}
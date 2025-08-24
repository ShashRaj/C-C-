#include <iostream>
using namespace std;

int main ()
{
    
    int a = 5, b = 10;

    int sum = a + b;
    cout << "The sum is: " << sum << endl;

    cout << "The difference is:" << (a-b) << endl;

    cout << "The mul is:" << (a*b) << endl;

    cout << "The div(quotient) is:" << (a/b) << endl;

    cout << "The div(quotient) is:" << (10/double(3)) << endl; // typecasting works here

    cout << "The div(remainder) is:" << (a%b) << endl;

    printf("sum in C %d\n", a+b);

    //Relational Operator

    // < > <= >= == !=

    cout << (3<5) << endl;

    cout << (3<=4) << endl;

    bool boo = (4!=4);
    cout << boo << endl;

    cout << boolalpha << (3<=4) << endl; // to print true or false

    /*
    logical or ||
    logical and &&
    logical not !
    */
   
    return 0;
}

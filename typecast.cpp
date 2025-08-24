#include <iostream>
using namespace std;

int main()
{
    //printing ascii value

    char grade = 'A';
    int value = grade;

    //type conversion - Implicit DOne by compiler
    cout << value << endl;

    //typecasting

    double price = 1000.99;

    //typecasting -- Explicit
    int newPrice = (int)price;

    cout << newPrice << endl;

}
#include<iostream>
using namespace std;
void decToBinary (int num)
{
    int ans = 0, pow =1;
    while (num > 0)
    {
        int rem = num % 2; // remainder
        num /=2; //quotient

        ans += rem*pow; // 10 to the power, then add it.
        pow *= 10;
    }

    cout << ans << endl;
}
int main()
{
    int decNum = 8;

    decToBinary(decNum);
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    int temp = n;
    while (temp > 0)
    {
        int lastDigit = temp % 10;
        sum += lastDigit;
        temp = temp / 10;
    }
    cout << sum << endl;
    // reverse a number
    // int n;
    // cin >> n;
    // int temp = n;
    // int reverse = 0;
    // while (temp > 0)
    // {
    //     int lastDigit = temp % 10;
    //     reverse = reverse * 10 + lastDigit;
    //     temp = temp / 10;
    // }
    // cout << reverse << endl;
}
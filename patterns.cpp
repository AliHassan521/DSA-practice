#include <bits/stdc++.h>
using namespace std;

// *****
// *****
// *****
// *****
// *****

void pat1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// *
// **
// ***
// ****
// *****

void pat2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// 1
// 12
// 123
// 1234
// 12345

void pat3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

// 1
// 22
// 333
// 4444
// 55555

void pat4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

// *****
// ****
// ***
// **
// *

void pat5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// 12345
// 1234
// 123
// 12
// 1

void pat6(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

//       *
//      ***
//     *****
//    *******
//   *********

void pat7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

// *********
//  *******
//   *****
//    ***
//     *

void pat8(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = n * 2 - 1; j > i * 2; j--)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *

void pat9(int n)
{
    for (int i = 1; i <= n * 2 - 1; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = n * 2 - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

// 1
// 01
// 101
// 0101
// 10101

void pat10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1";
            }
            else
                cout << "0";
        }
        cout << endl;
    }
}

// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

void pat11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // spaces
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        // numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pat12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    // pat1(n);
    // pat2(n);
    // pat3(n);
    // pat4(n);
    // pat5(n);
    // pat6(n);
    // pat7(n);
    // pat8(n);
    // pat9(n);
    // pat10(n);
    // pat11(n);
    pat12(n);
}
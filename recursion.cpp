#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void fn()
{
    if (cnt == 4)
        return;
    cout << cnt << " ";
    cnt++;
    fn();
}

void fun(int n)
{
    if (cnt == n)
        return;
    cout << "Ali" << " ";
    cnt++;
    fun(n);
}

int main()
{
    // a function that calls itself is called when a certain condition is met
    fn();
    int n = 4;
    fun(n);
}
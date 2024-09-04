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

int main()
{
    // a function that calls itself is called when a certain condition is met
    fn();
}
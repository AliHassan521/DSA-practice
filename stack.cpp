#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> s;
    s.push(1);    // {1}
    s.push(2);    // {1,2}
    s.push(3);    // {1,2,3}
    s.push(4);    // {1,2,3,4}
    s.emplace(5); // {1,2,3,4,5}

    cout << s.top() << endl; // 5

    s.pop(); // {1,2,3,4}

    stack<int> s1, s2;
    s1.swap(s2);
}
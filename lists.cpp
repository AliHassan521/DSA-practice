#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;

    ls.push_back(1);
    ls.emplace_back(2);

    // list is a doubly linked list so we can insert elements at the front of the list

    ls.push_front(3);
    ls.emplace_front(4);

    for (auto it : ls)
    {
        cout << it << " ";
    }
}
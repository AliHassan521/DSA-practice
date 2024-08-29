#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<int, int> m; // key value pair, key is unique and any data type, value can be any data type

    // defining the map
    m[1] = 10;
    m.emplace(2, 20);
    m.insert({3, 30});

    // printing the map
    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
}
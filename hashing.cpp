#include <bits\stdc++.h>

using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // // precomputation
    // int hash[12] = {0};
    // for (int i = 0; i < n; i++)
    // {
    //     hash[arr[i]]++;
    // }

    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int num;
    //     cin >> num;
    //     // fetching the value from the hash table
    //     cout << hash[num] << endl;
    // }

    string s;
    cin >> s;

    // precomputation
    int hash[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        hash[s[i] - 'a']++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        // fetching the value from the hash table
        cout << hash[c - 'a'] << endl;
    }
}
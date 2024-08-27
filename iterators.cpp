#include <bits/stdc++.h>
using namespace std;

void print()
{

    vector<int> v = {1, 2, 3, 4, 5, 6};

    // vector<int>::iterator it = v.begin(); // iterator is a pointer,points to the memory address
    //  it++;
    //  it = it + 2;
    //  cout << *it << endl;

    // vector<int>::iterator it = v.end(); // v.end() points to the next memory address of the last element

    // for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;

    // auto keyword is used to automatically detect the data type of the variable
    // for (auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // cout << endl;

    // for each loop
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }
    // cout << endl;

    // deleting an element from the vector
    // v.erase(v.begin() + 2);
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }

    // cout << endl;

    // v.erase(v.begin() + 2, v.begin() + 5); // deleting elements from 2 to 5
    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }

    // cout << endl;

    // inserting elements in the vector
    v.insert(v.begin() + 2, 10);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;

    v.insert(v.begin() + 2, 3, 10); // inserting 3 elements of value 10 at index 2
    for (auto it : v)
    {
        cout << it << " ";
    }
}

int main()
{
    print();
}
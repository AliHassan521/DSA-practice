#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> l;
    l.push_back(1);
    l.push_back(3);
    l.push_front(5);
    l.push_front(2);

    for(auto val : l){
        cout << val << " ";
    }
}
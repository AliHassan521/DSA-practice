#include<bits/stdc++.h>
using namespace std;

int subtractProductAndSum(int n) {
        int sum = 0,pro = 1,diff;
        while(n>0){
            int rem = n%10;
            sum+=rem;
            pro*=rem;
            n/=10;
        }
    }


int main(){
    int n;
    cin>>n;
    cout<<subtractProductAndSum(n);
    return 0;
}
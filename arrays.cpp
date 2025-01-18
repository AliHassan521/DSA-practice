#include<bits/stdc++.h>
using namespace std;

int main(){

     int arr[] = {1,2,1,4,2};
    int n  = sizeof(arr)/sizeof(arr[0]);

    // // reverse an array
    // int start = 0,end = n - 1;
    // while(start < end){
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
    // }

    // // swap alternate elements
    // for(int i = 0;i < n;i+=2){
    //    if(i + 1 < n){
    //     swap(arr[i],arr[i + 1]);
    //    } 
    // }
    // // print array
    // for(int i = 0;i < n;i++){
    //     cout << arr[i] << " ";
    // }

    // find unique element
    int ans = 0;
    for(int i = 0;i < n;i++){
        ans = ans ^ arr[i];
    }
    cout << ans;

    return 0;
}
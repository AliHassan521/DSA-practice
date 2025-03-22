#include<bits/stdc++.h>

using namespace std;

// int firstOcc(int arr[], int key, int size){
//     int start = 0;
//     int end = size - 1;
//     int ans = -1;
//     int mid = start + (end - start) / 2;
  
//     while (start <= end){
//         if(arr[mid] == key){
//             ans = mid;
//             end = mid - 1;
//         }

//         else if(key > arr[mid]){
//             start = mid + 1;
//         } 
//         else if(key < arr[mid]){
//            end = mid - 1;
//         }

//         mid = start + (end - start) / 2;
//     }

//     return ans;
// }

// int lastOcc(int arr[], int key, int size){
//     int start = 0;
//     int end = size - 1;
//     int ans = -1;
//     int mid = start + (end - start) / 2;
  
//     while (start <= end){
//         if(arr[mid] == key){
//             ans = mid;
//             start = mid + 1;
//         }

//         else if(key > arr[mid]){
//             start = mid + 1;
//         } 
//         else if(key < arr[mid]){
//            end = mid - 1;
//         }

//         mid = start + (end - start) / 2;
//     }

//     return ans;
// }


int main(){
    int even[6] = {2,3,40,6,8,14};

    // cout << "first index 0f 2 : " << firstOcc(even,2,6) << endl;
    // cout << "last index 0f 2 : " << lastOcc(even,2,6);

}
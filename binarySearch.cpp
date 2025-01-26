#include<bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int key, int size){
    int start = 0;
    int end = size - 1;

    // due to overflow
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2;

    while (start <= end){
        if(key == arr[mid]){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        } 
        else{
            end = mid - 1;
        }

        // due to overflow
       // int mid = (start + end) / 2;
        mid = start + (end - start) / 2;
    }

    return -1;
}

int main(){
    int even[6] = {2,4,6,8,12,14};
    int odd[6] = {1,3,5,7,9,11};

    int index = binarySearch(even, 8, 6);
    cout << index;

}
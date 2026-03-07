#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {1,2,3,4,5};
    int temp = arr[0];
    int n = size(arr);
    for(int i;i<n;i++){
        arr[i+1] = arr[i];
    }
    arr[n-1] = temp;
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4];
    return 0;
}    


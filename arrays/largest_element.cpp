#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,5,8,3,9,2,1};
    int n = size(arr);
    int largest = arr[0];
    for (int i=0;i<n;i++) {
        if (arr[i]>largest){
            largest = arr[i];
        }
    }
    cout << "The largest number is: " << largest << endl;
    return 0;
}
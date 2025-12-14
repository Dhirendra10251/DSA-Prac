#include<bits/stdc++.h>
using namespace std;
//bruteforce
class solution1{
public:
    void rotate1(vector<int>& nums, int k){
    int n = nums.size();
    k = k % n; 
    int temp[n]; //insering elements in temprorary variable
    for(int i=0;i<k;i++){
        temp[i] = nums[i];
    }
    for(int i=n-k;i<n;i++){
        nums[i-(n-k)] = nums[i]; 
    }
    for(int i=k;i<n;i++){
        nums[i] = temp[i-k];
    }
    return;
    }
};
//optimal soln - better space complexity but a little incresed TC.
class solution2{
public:
    void rotate2(vector<int>& arr, int d){
    int n = arr.size();
    d = d % n;
    reverse(arr.begin(),arr.begin()+n);
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.begin()+n);
    return;
    }
};
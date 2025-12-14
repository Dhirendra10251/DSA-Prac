#include<bits/stdc++.h>
using namespace std;
//bruteforce
class solution1{
public:
    void rotate(vector<int>& nums, int k){
    int n = nums.size();
    k = k % n; 
    int temp[n]; //insering elements in temprorary variable
    for(int i=0;i<n;i++){
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
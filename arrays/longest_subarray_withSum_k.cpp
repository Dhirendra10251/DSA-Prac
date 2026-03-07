#include<bits/stdc++.h>
using namespace std;

//brute force soln
class solution{
public:
    int findLongestSubArrayWithSumK(vector<int>& nums,int k){
        int max_len = 0;
        for(int i=0;i<nums.size();i++){
            
            for(int j=i;j<nums.size();j++){
                int sum=0;
                for(int k=i;i<j;k++){
                    sum += nums[k];
                }
                if(sum==k){
                    max_len = max(max_len,j-i+1);
                }
            
        }
        }
        return max_len;
    }  
};
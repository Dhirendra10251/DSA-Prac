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

//optimal solution(using two pointer)
class solution{
public:
    int findLongestSubArrayWithSumK(vector<int>& nums,long long k){
    int left =0, right =0;
    long long sum = nums[0];
    int max_len = 0;
    while(right<nums.size()){
        while(left<=right && sum==k){
            sum -= nums[left];
            left++;
        }
        if(sum==k){
            max_len=max(max_len,right-left+1);
        }
        right++;
        if(right<nums.size()){
            sum += nums[right];
        }
    }
    return max_len;
    }  
};
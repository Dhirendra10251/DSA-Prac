//optimal solution tc- O(n)
#include<bits/stdc++.h>
using namespace std;
class solution{
public:
    bool check(vector<int>& nums){
        int n = nums.size();
        int dips = 0;

        for(int i = 1;i<n;i++){
            if(nums[i-1]>nums[i]){ 
                dips++;
            }
            if(nums[n-1]>nums[0]){
                dips++;
            }
        }
        return dips <= 1;
    }
};
#include<bits/stdc++.h>
using namespace std;
//bruteforce
class solution1{
public:
    void shifter(vector<int>& arr){
        vector<int> temp;
        for(int i=0;i<arr.size();i++){
            if(arr[i] != 0){
                temp.push_back(arr[i]);
            }
        }
        for(int i =0;i<temp.size();i++){
            arr[i] = temp[i];
        }
        for(int i = temp.size();i<arr.size();i++){
            arr[i] = 0;
        }
        return;
    }
};

//optimal
class solution{
public:
    void zeroshifter(vector<int>& num){
        int j = 0;
        for (int i = 0; i<num.size();i++){
            if(num[i]!=0){
                swap(num[i],num[j]);
                j++;
            }
        }
        return;
    }
};
#include<bits/stdc++.h>
using namespace std;
class solution{
public:
    int alloccurrence(vector<int>& arr, int x){
        int count = 0;
        for(int i=0;i<size(arr);i++){
            if(arr[i] == x){
                count++;
            }
        }
        return count;
    }
};
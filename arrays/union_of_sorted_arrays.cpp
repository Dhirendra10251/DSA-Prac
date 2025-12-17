#include<bits/stdc++.h>
using namespace std;
// brute force soln
class solution1{
public:
    int union1(vector<int>& arr1,vector<int>& arr2){
        int arr1[] = {1,1,2,3,4,5};
        int arr2[] = {2,3,4,5,6};
        set<int> st;

        for(int i = 0;i<size(arr1);i++){
            st.insert(arr1[i]);
        }   
        for(int i = 0;i<size(arr2);i++){
            st.insert(arr2[i]);
        }
        int n = st.size();
        int union1[n];
        int j = 0;
        for(auto it:st){
            union1[j] = it;
            j++;
        }
        cout<<"Union of two sorted arrays is: ";
        for(int i = 0;i<n;i++){
            cout<<union1[i]<<" ";
        }
        return;
    }
};
// bruteforce soln
#include<bits/stdc++.h>
using namespace std;
class solution{
public:
    int main(){
        int arr[]= {1,1,2,2,2,3,3,3};
        int n = size(arr);
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(arr[i]);
        }
        int index = 0;
        for(auto it:st){
            arr[index] = it;
            index++;
        }
    }
};

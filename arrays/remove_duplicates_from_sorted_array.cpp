// bruteforce soln
#include<bits/stdc++.h>
using namespace std;
class solution1{
public:
    int main(){
        int arr[]= {1,1,2,2,2,3,3,3};
        set<int> st;
        for(int i=0;i<size(arr);i++){
            st.insert(arr[i]);
        }
        int index = 0;
        for(auto it:st){
            arr[index] = it;
            index++;
        }
    }
};

//optimal (two pointer)
class solution2{
public:
    int main (){
        int arr[]= {1,1,2,2,2,3,3,3};
        int i = 0;
        for(int j = 0;j<size(arr);j++){
            if(arr[j]!=arr[i]){
                arr[i+1]=arr[j];
                i++;     
            }
        }
        return i+1;
    }
};
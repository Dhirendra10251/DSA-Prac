#include<bits/stdc++.h>
using namespace std;
int main (){
    int x;
    cin>>x;
    int arr[] = {1,2,3,4,5,6,7,8,9};
    for(int i=0;i<size(arr);i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 9;
    int count =0;
    int arr[] = {10,20,20,10,10,50,50,20,20};
    unordered_map<int,int>mp;
    for(int i =0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto x : mp){
        if(x.second>1){
            if(x.second/2 >= 1){
                count = count + x.second/2;
            }
        }
    }
    cout<<count++;
    
    
    
    
    return 0;
}

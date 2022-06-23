#include<bits/stdc++.h>
using namespace std;
int freq(int arr[],int n){
    unordered_map<int,int>s;
    for(int i =0;i<n;i++){
        s[arr[i]]++;
    }
    for(auto e : s){
        cout<<e.first<<" "<<e.second<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    freq(arr,n);
    cout<<endl;
    return 0;
}

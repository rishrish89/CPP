#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int largest=0, second=0;
    for(int i =0;i<n;i++){
        if(arr[i]>arr[largest]){
            largest = i;
        }
    }
    for(int i=0;i<n;i++){
         if(arr[i]>=arr[second] && arr[i]<arr[largest]){
            second = i;
        }
    }
    cout<<arr[second]<<" ";
    
    return 0;
}
###############################################
METHOD -2:
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {2,111,5,6,87};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    
    int max1,max2;
    max1 = max2 = INT_MIN;
    for(int i =0;i<n;i++){
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
            
        }
        else if(arr[i]<max1 && arr[i]>max2){
            max2 = arr[i];
        }
        
    }
    cout<<max1<<" "<<max2;
    
    
    
}

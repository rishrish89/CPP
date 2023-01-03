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

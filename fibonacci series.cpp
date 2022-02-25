
#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int main()
{ int a =0,b=1,c,n;
  cin>>n;
 if(n==1){
   cout<<a<<endl;
 }
 else if( n==2){
   cout<<a<<endl;
   cout<<b<<endl;}
 else if(n>2){
   cout<<a<<endl;
   cout<<b<<endl;
  for(int i =2;i<n;++i){
    c =a+b;
    cout<<c<<endl;
    a=b;
    b=c;
  }
 } 
    
    
    
  }
    

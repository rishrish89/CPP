#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;
int getsum(int n){
  if(n==1){
    return 1;
  }
  int sum = n%10 + getsum(n/10);
  return sum;
}
int main()
{ int n;
cout<<"enter the number: ";
 cin>>n;
 cout<<getsum(n);
 
    return 0;
}

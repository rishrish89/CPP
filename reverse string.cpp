//string st = "My Name Is Rishita";
//output :  Atihsir Si Eman Ym
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
char inlower(char f){
    
        if(f >= 'a' && f <= 'z' || f == ' ' ){
            return  f;
        }
        else{
            char k = f - 'A' + 'a';
            return k;
        }
    }
    
    
int main() {
   
   int p =0;
    string st = "My Name Is Rishita";
    int x =st.length() -1;
    for(int i =0;i<st.length();i++){
       st[i] = inlower(st[i]);
    }
    
    while(p<= x){
      
        swap(st[p++],st[x--]);
    
    }
    cout<<st<<endl;
    int i =0;
    st[0] = st[0] - 'a' + 'A';
    while(i<=st.length()){
        if(st[i] == ' '){
            i++;
            st[i] =  st[i] - 'a' + 'A';
        }
       i++; 
    }
   cout<<" again :- "<<st<<endl;
}

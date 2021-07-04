#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,s=0,f;
cin>>n;
for(i=1;i<n && s<n;i++){
    s=s+i;
    f=0;
    if(n-s>0){
        s=s+(2*i);
        f=1;
    }
}
if(f==0){
    cout<<"Patlu";
}
else{
    cout<<"Motu";
}
}

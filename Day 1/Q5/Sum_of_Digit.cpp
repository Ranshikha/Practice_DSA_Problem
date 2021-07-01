#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,rem,res;
cin>>t;
while(t--){
cin>>n;
res=0;
while(n>0){
rem=n%10;
res=res+rem;
n=n/10;
}
cout<<res<<endl;
}
}

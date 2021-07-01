#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,rem,a=0,rev=0;
cin>>t;
while(t--){
cin>>n;
a=n;
rev=0;
while(a>0){
rem=a%10;
rev=rev*10+rem;
a=a/10;
}
cout<<rev<<endl;
}
}



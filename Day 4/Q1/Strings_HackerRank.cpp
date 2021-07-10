#include<bits/stdc++.h>
using namespace std;
int main(){
string str1, str2;
cin>>str1>>str2;
cout<<str1.size()<<" "<<str2.size()<<endl;
cout<<str1+str2<<endl;
char c0=str1[0];
char c3=str2[0];
str1[0]=c3;
str2[0]=c0;
cout<<str1<<" "<<str2<<endl;
}

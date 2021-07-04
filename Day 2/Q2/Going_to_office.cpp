#include<bits/stdc++.h>
using namespace std;
int main(){
long int D,oc,of,od,cs,cb,cm,cd,Online,Classic;
cin>>D;
cin>>oc>>of>>od;
cin>>cs>>cb>>cm>>cd;
Online=(oc+(D-of)*od);
Classic=cb+((D/cs)*cm)+(D*cd);

if(Online<=Classic){
    cout<<"Online Taxi"<<endl;
}
else{
    cout<<"Classic Taxi"<<endl;
}
}

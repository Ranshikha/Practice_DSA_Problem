#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a[10],p=1,i;
scanf("%d",&n);
while(n>0){
for(i=1;i<=n;n--){
scanf("%d",&a[i]);
p=p*a[i];
}
printf("%d",p);
}
}

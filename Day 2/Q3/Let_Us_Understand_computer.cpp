#include<bits/stdc++.h>
using namespace std;

int* dtob(int n)
{
int binary[32];
int i=0;
	while(n>0)
	{
		binary[i]=n%2;
		n=n/2;
		i++;
	}
	return binary;
}

int main(){
int tc;
cin>>tc;
while(tc--)
	{
		int x,result,ans=0;
		cin>>x;
		for(int i=1;i<=x;i++)
		{
			result=x/i;
            int* binI=dtob(i);
			int* binRes=dtob(result);
			cout<<binI<<" "<<binRes<<endl;
		}
		cout<<ans<<endl;
	}
}

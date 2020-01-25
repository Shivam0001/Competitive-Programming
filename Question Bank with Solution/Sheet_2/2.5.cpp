#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,mul1=1,mul2=1;
	cin>>n;
	int fterm=2;
	int sterm=3;
	if(n==1||n==2)
	{
		cout<<"1";
		return 0;
	}
	for(i=1;i<=n-2;i++)
	{
		if(i%2)
		{
			fterm*=mul1;
			//cout<<fterm<<" ";
			mul1=2;
		}
		else
		{
			sterm*=mul2;
			//cout<<sterm<<" ";
			mul2=3;
		}
	}
		if(n%2)
		cout<<fterm;
	else
		cout<<sterm;
}

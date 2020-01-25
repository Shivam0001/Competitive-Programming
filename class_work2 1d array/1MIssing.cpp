#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,i;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(i=0;i<n-1;i++)
		cin>>a[i];
		int temp=0;
		for(i=1;i<=n;i++)
		temp=temp^i;
		for(i=0;i<n-1;i++)
		temp=temp^a[i];
		
		cout<<temp<<endl;
	}
}

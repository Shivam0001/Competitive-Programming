#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,k,ispace;
	cin>>n;
	ispace=n-2;
	int m=n;
	for(i=1;i<=n;i++)
	{
		cout<<i;
		if(i==n)
		{
			for(j=n-1;j>=1;j--)
			cout<<j;
		}
		else
		{
		
			for(j=1;j<=ispace;j++)
				cout<<" ";
			cout<<m--;
		}
		cout<<endl;
	
	}
	m=n-1;
		for(i=1;i<n;i++)
	{
		cout<<m--;

			for(j=1;j<=ispace;j++)
				cout<<" ";
			
		cout<<i+1;
		cout<<endl;
	}
	
	
	return 0;
}

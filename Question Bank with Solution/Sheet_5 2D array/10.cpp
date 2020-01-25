#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,m,i,j,t,max=0,c=0;
	cin>>n>>m;
	int a[n][m],b[n][m],index,sumrow[n],sumcol[n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];	
		}
	
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>b[i][j];	
		}
	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cout<<a[i][j]+b[i][j];
		}
		cout<<endl;
		
	}
}

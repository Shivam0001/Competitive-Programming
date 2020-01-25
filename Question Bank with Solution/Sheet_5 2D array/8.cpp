#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,m,i,j,t,max=0,c=0;
	cin>>n>>m;
	int a[n][m],index,sumrow[n],sumcol[n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];	
		}
	
	}
	for(i=1;i<n-1;i++)
	{
		for(j=1;j<m-1;j++)
		{
			if(a[i][j]>a[i-1][j]&&a[i][j]>a[i][j+1]&&a[i][j]>a[i+1][j]&&a[i][j]>a[i][j-1])
			cout<<a[i][j]<<" ";
		}

	}
	

}

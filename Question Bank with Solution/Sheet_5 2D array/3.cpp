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
	for(i=0;i<n;i++)
	{c=0;
		for(j=0;j<n;j++)
		{
			if(a[j][i]==1)
			c++;
		}
		if(c>max)
		{
			max=c;
			index=i;
		}
		
	}
	cout<<index+1;

}

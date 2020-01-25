#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,m,i,j,k,max=0,c=0;
	cin>>n>>m;
	int a[n][m],index,sumrow[n],sumcol[n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];	
		}
	
	}
	cout<<"k:";
	cin>>k;
	int startrow;
	int startcol;
	if(k<n)
	{
		startrow=0;
		startcol=k;
	}
	else
	{
		startrow=k-n+1;
		startcol=n-1;
	}
	
	for(;startrow<n&&startcol>=0;)
	{
		
		cout<<a[startrow][startcol]<<" ";
		startrow++;
		startcol--;
	}
	
}

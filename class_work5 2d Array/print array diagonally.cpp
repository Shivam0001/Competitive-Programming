#include<bits/stdc++.h>
using namespace std;
int n,m;
void preverse(int a[][10],int k)
{
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
	cout<<endl;
	
}
void pstraight(int a[][10],int k)
{
	int startrow;
	int startcol;
	if(k<n)
	{
		startrow=k;
		startcol=0;
	}
	else
	{
		startrow=n-1;
		startcol=k-n+1;
	}
	
	for(;startrow>=0&&startcol<m;)
	{
		
		cout<<a[startrow][startcol]<<" ";
		startrow--;
		startcol++;
	}
	cout<<endl;
	
}

using namespace std;
int main()
{
	int i,j,k,max=0,c=0;
	cin>>n>>m;
	int a[10][10],index,sumrow[n],sumcol[n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];	
		}
	
	}
	for(k=0;k<2*n-1;k++)
	{
		if(k%2==0)
		preverse(a,k);
		else
		pstraight(a,k);
	}
}

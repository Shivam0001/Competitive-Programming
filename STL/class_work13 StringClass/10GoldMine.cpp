#include<bits/stdc++.h>
using namespace std;

int max3(int a,int b,int c)
{
	if(a>b&&a>c)
	return a;
	else if(b>c)
	return b;
	else
	return c;
}

int main()
{
	int n,m,rightdown,rightup,right,max=INT_MIN;
	cin>>n>>m;
	int a[n][m],index,sumrow[n],sumcol[n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];	
		}
	}
	
	for(int col=n-2;col>=0;col--)
	{
		for( int row=0;row<n;row++)
		{
			rightdown=(row<=m-2)?a[row+1][col+1]:0;
			rightup=(row>=1)?a[row-1][col+1]:0;
			right=a[row][col+1];
			a[row][col]+=max3(rightdown,rightup,right);
		}
	}
//	for(int i=0;i<n;i++)
//	{
//		for(int j=0;j<n;j++)
//		{
//			cout<<a[i][j]<<" ";	
//		}
//		cout<<endl;
//	}
for(int i=0;i<n;i++)
		{
			if(a[i][0]>max)
			max=a[i][0];	
		}
cout<<max;
}

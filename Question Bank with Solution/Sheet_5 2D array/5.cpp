#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,m,i,j,t,maxr=INT_MIN,maxc=INT_MIN;
	cin>>n>>m;
	int a[n][m];
	int rowmax[m],colmax[m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	
	int k=0,l=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(a[i][j]>maxr)
			{
			maxr=a[i][j];
			}
		}
		cout<<maxr<<" ";
		maxr=INT_MIN;
	}
	cout<<endl;
		for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		
			if(a[j][i]>maxc)
			{
			maxc=a[j][i];
			}
		}
		cout<<maxc<<" ";
		maxc=INT_MIN;
	}

}

#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,m,i,j,t,max=INT_MIN,c=0,sum=0;
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
	{sum=0;
		for(j=0;j<n;j++)
		{
			sum+=a[j][i];
		}
		if(sum>max)
		{
			max=sum;
			index=i;
		}
		
	}
	cout<<index+1;

}

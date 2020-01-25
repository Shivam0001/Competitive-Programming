#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,m,i,j,t,max=0,c=0;
	cin>>n;
	cin>>m;
	int **a;
	a=(int **)malloc(sizeof(int *)*n);
	for(i=0;i<n;i++)
	{
	a[i]=(int *)malloc(sizeof(int)*m);	
	}
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	{
	cin>>a[i][j];
	cout<<a[i][j];
}
}
	
	
	
	


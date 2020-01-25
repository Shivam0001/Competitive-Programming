#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,m;
	cin>>n>>m;
	int a[m+1];
	for(int i=1;i<=m;i++)
	cin>>a[i];
	 int w[n+1][m+1];
	for(int i=1;i<=n;i++)
		w[i][0]=0;
	for(int i=0;i<=m;i++)
		w[0][i]=1;
	for(int i=1;i<=n;i++)
	{ 
		for(int j=1;j<=m;j++)
		{
			k=0;
			if(i>=a[j])
			k=w[i-a[j]][j];
			w[i][j]=k+w[i][j-1];
		}
	}
	cout<<w[n][m];
}

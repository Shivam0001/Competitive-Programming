#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	long long int p[n+1][k+1];
	for(int i=0;i<=n;i++)
		p[i][0]=1;
	
	for(int j=1;j<=k;j++)
	p[0][j]=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			p[i][j]=j*p[i-1][j-1]+p[i-1][j];
			cout<<p[i-1][j-1]<<" ";
			
		}cout<<endl;
	}

	
	cout<<p[n][k];
}

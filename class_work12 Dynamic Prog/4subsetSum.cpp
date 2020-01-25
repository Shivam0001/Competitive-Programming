#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,m,sum;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	cin>>sum;
	
	 bool sub[sum+1][n+1];
	for(int i=1;i<=sum;i++)
		sub[i][0]=false;
	for(int i=0;i<=n;i++)
		sub[0][i]=true;
	for(int i=1;i<=sum;i++)
	{ 
		for(int j=1;j<=n;j++)
		{
			if(a[j]<=i)
			sub[i][j]=sub[i-a[j]][j-1]||sub[i][j-1];
			else
			sub[i][j]=sub[i-1][j];
			cout<<sub[i-1][j-1]<<" ";
		}
		cout<<endl;
	}
	if(sub[sum][n]==1)
	cout<<"Yes";
	else
	cout<<"No";
}

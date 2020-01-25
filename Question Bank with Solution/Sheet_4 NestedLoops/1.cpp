#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,i,sum,j;
	cin>>n;
	cin>>sum;
	int a[n];

	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j)
			if(a[i]+a[j]==sum)
			{
			cout<<"Yes";
			return 0;
		}
		}
	}

	cout<<"No";
	
}

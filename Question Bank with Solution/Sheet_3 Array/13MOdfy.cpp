#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,max=INT_MIN,i=0,j=0,k=0;
	cin>>n>>m;
	
	int a[n],b[m];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<m;i++)
	cin>>b[i];


for(i=0;i<n;i++)
{
		if(a[i]%2&&b[i]%2)
		{
			a[i]=a[i]*b[i];
		}
		else if(a[i]%2==0&&b[i]%2==0)
		{
			a[i]=a[i]+b[i];
		}
		//cout<<c[i]<<endl;
	}

	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	}

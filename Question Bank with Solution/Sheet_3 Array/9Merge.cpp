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
	int l=n+m;
	int c[l];
	i=0;
	while(i<n&&j<m)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			i++;
			k++;
		}
		else
		{
			c[k]=b[j];
			j++;
			k++;
		}
		//cout<<c[i]<<endl;
	}
	while(i<n)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<m)
	{
		c[k]=b[j];
		j++;
		k++;
	}
	for(i=0;i<k;i++)
	cout<<c[i]<<" ";
	}

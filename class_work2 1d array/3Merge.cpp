#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i=0,j=0,k=0;
	int a[]={1,3,4,5};
	int b[]={3,5,10,12,13};
	int n=4,m=5;
	int l=n+m;
	int c[l];
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
	
	for(i=0;i<l;i++)
	cout<<c[i]<<" ";
	
	
	
	
}

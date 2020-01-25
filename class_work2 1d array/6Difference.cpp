#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i=0,j=0,k=0;
	int a[]={1,2,3,5,6,6,6,9};
	int b[]={2,5,6,7,7,7};
	int n=8,m=6,flag,x;
	int c[n];
	while(i<n&&j<m)
	{
		if(a[i]==b[j])
		{
			i++;
			j++;
		}
		else
		{
				
			if(a[i]<b[j])
			{
				c[k]=a[i];
				k++;
				i++;
			}
			else
			j++;
		}
	
	}
	while( i<n)
	{
		c[k]=a[i];
		i++;
		k++;
	}
	for(i=0;i<k;i++)
	{
		cout<<c[i]<<" ";
	}
}

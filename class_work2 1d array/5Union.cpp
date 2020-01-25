#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i=0,j=0,k=0;
	int a[]={1,3,4,5};
	int b[]={3,3,5,5,13};
	int n=4,m=5,flag;
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
				else if(b[j]<a[i])
				{
					c[k]=b[j];
					j++;
					k++;
				}
				else
				{
					c[k]=a[i];
					i++;
					j++;
					k++;
				}
			
	}
	while(i<n)
	{
	
			{
		c[k]=a[i];
		k++;
		}
	i++;
		
	}
	while(j<m)
	{
		
				c[k]=b[j];
				k++;
			
				j++;
	}
	
	for(i=0;i<k;i++)
		if(c[i]!=c[i+1])
	cout<<c[i]<<" ";
	
	
	
	
}

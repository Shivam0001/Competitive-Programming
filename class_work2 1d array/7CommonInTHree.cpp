#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i=0,j=0,k=0,l=0;
	int a[]={1,2,4,5,6,8,8,9};
	int b[]={2,5,6,8,8,13};
	int c[]={2,6,8,8};
	int n=8,m=6,o=4,flag,x,p;
	int d[n];
	while(i<n&&j<m&&k<o)
	{
		if(a[i]==b[j]&&a[i]==c[k])
		{
			
				d[l]=a[i];
				l++;
			
			i++;
			j++;
			k++;
		}
		else
		{
			if(a[i]<b[j]&&a[i]<c[k])
				i++;
			else if(b[j]<c[k])
				j++;
			else
				k++;
		}
		
	}
	
	for(i=0;i<l;i++)
	{
		if(d[i]!=d[i+1])
		{
			cout<<d[i]<<" ";
		}
	}
	

}

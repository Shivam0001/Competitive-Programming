#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i=0,j=0,k=0,l=0;
	int a[]={1,3,4,5};
	int b[]={2,5,10,12,13};
	int c[]={2,4,6,8};
	int n=4,m=5,o=4;
	int x=n+m+o;
	int d[x];
	while(i<n&&j<m&&k<o)
	{
		if(a[i]<b[j]&&a[i]<c[k])
		{
			d[l]=a[i];
			i++;
			l++;
		}
		else if(b[j]<c[k])
		{
			d[l]=b[j];
			j++;
			l++;
		}
		else
		{
			d[l]=c[k];
			k++;
			l++;
		}
	}
	if(k==o) //end of c[k]
	{
			while(i<n&&j<m)
		{
			if(a[i]<b[j])
			{
			d[l]=a[i];
			i++;
			l++;
			}
			else
			{
			d[l]=b[j];
			j++;
			l++;
			}
			//cout<<c[i]<<endl;
		}
		while(i<n)
		{
			d[l]=a[i];
			i++;
			l++;
		}
		while(j<m)
		{
			d[l]=b[j];
			j++;
			l++;
		}
	}
else if(i==n) //end of a[i]
	{
			while(k<o&&j<m)
		{
			if(c[k]<b[j])
			{
			d[l]=c[k];
			k++;
			l++;
			}
			else
			{
			d[l]=b[j];
			j++;
			l++;
			}
			//cout<<c[i]<<endl;
		}
		while(k<o)
		{
			d[l]=c[k];
			k++;
			l++;
		}
		while(j<m)
		{
			d[l]=b[j];
			j++;
			l++;
		}
	}
else if(j==m) //end of b[j]
	{
			while(k<o&&i<n)
		{
			if(c[k]<a[i])
			{
			d[l]=c[k];
			k++;
			l++;
			}
			else
			{
			d[l]=a[i];
			i++;
			l++;
			}
			//cout<<c[i]<<endl;
		}
		while(k<o)
		{
			d[l]=c[k];
			k++;
			l++;
		}
		while(i<n)
		{
				d[l]=a[i];
			i++;
			l++;
		}
	}	
	for(i=0;i<l;i++)
	cout<<d[i]<<" ";

}

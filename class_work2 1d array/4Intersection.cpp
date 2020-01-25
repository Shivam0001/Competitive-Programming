#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i=0,j=0,k=0;
	int a[]={2,5,7,7,8};
	int b[]={2,7,7,11};
	int n=5,m=4,l;
	if(n<m)
	l=n;
	else
	l=m;
	
	int c[l],flag;
	int temp=100;
	while(i<n&&j<m)
	{
		if(a[i]==b[j])
		{	
			c[k]=a[i];
			k++;
			i++;
			j++;
		}
		else
		{
			if(a[i]<b[j])
			i++;
			else
			j++;
		}
		
		
	}
	for(i=0;i<k;i++)
		if(c[i]!=c[i+1])
	cout<<c[i]<<" ";
}

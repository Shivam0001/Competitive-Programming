#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,c=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		continue;
		else
		{
			for(int j=i+1;j<n;j++)
			{
			if(a[j]<0)
			{	int t=a[i];
				a[i]=a[j];
				a[j]=t;
				break;
			}
			}
		}
		
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}

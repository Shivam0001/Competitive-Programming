#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,d,temp,j;
	cin>>n;
	cin>>d;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(j=0;j<d;j++)
	{
		temp=a[0];
		for(i=0;i<n;i++)
		{
			a[i]=a[i+1];
		}
		a[n-1]=temp;
	}
	for(i=0;i<n;i++)
	cout<<a[i];
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,max=INT_MIN;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	cout<<max;
	
}

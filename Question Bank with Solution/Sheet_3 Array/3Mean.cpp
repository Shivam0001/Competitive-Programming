#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,find,sum=0,c=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	float mean=(float)sum/n;
	for(i=0;i<n;i++)
	{
		if(a[i]>mean)
		{
		c++;
	}
	}
	cout<<c;
	
}

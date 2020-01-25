#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,find,range1,range2,c=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>range1;
	cin>>range2;
	for(i=0;i<n;i++)
	{
		if(a[i]>=range1&&a[i]<=range2)
		{
		c++;
	}
	}
	cout<<c;
	
}

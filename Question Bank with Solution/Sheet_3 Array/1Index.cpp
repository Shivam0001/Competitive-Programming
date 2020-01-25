#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,find;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>find;
	for(i=0;i<n;i++)
	{
		if(a[i]==find)
		break;
	}
	cout<<i+1;
}

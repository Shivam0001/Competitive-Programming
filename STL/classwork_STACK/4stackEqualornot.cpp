#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,min=INT_MAX;
	stack <int> s1,s2;
	cout<<"enter n and m:";
	cin>>n>>m;
	int a[n];
	int b[m];
	cout<<"enter n elements:";
	for( i=0;i<n;i++)
	{
		cin>>a[i];
		s1.push(a[i]);
	}
	cout<<"enter m elements:";
	for( i=0;i<m;i++)
	{
		cin>>b[i];
		s2.push(b[i]);
	}
	while(!s1.empty()||!s2.empty())
	{
		if(s1.top()!=s2.top())
		{
			cout<<"NOT EQUAL";
			return 0;
		}
		s1.pop();
		s2.pop();
	}
cout<<"Equal";
}

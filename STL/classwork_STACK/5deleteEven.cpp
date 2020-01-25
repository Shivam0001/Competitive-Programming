#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,min=INT_MAX;
	stack <int> s1,s2;
	cout<<"enter n:";
	cin>>n;
	int a[n];


	for( i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	for( i=n-1;i>=0;i--)
	{
		s1.push(a[i]);
		
	}

	while(!s1.empty())
	{
		if(s1.top()%2==0)
		{
			s1.pop();
		}
		else
		{
			s2.push(s1.top());
			s1.pop();
		}
	}
	while(!s2.empty())
	{
		s1.push(s2.top());
		s2.pop();
	}
	while(!s1.empty())
	{
		cout<<s1.top()<<" ";
		s1.pop();
	}
}

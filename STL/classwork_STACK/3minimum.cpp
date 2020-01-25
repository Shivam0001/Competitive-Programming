#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,min=INT_MAX;
	stack <int> s;
	cin>>n;
	int a[n];
	for( i=0;i<n;i++)
	{
		cin>>a[i];
		s.push(a[i]);
	}
	while(!s.empty())
	{
		int temp=s.top();
		s.pop();
		if(temp<min)
		{
			min=temp;
		}
		
	}
cout<<min;
}

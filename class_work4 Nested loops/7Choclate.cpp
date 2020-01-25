#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n,i,m,index1,index2;
	cin>>n;
	int a[n];
	int min=INT_MAX;
	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	sort(a,a+n);
	for(i=0;i<=n-m;i++)
	{
		int diff=a[i+m-1]-a[i];
		if(diff<min)
		{
		min=diff;
		}	
	}
	cout<<min;
}

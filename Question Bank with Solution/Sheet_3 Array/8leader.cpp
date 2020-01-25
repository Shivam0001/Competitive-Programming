#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,max=INT_MIN,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=n-1;i>=0;i--)
	{
		if(a[i]>max)
		{
			max=a[i];
			cout<<max<<" ";
		}
	}
}

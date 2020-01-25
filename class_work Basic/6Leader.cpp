#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,i,max=INT_MIN;
	cout<<"Enter n";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int j=0;
	for(i=n-1;i>=0;i--)
	{
		if(a[i]>max)
		{
		max=a[i];
		cout<<max<<" ";
	}
	}
	
}

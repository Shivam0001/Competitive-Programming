#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i=0,j=0,k=0,index;
	cin>>n;
	
	int a[n],b[m];
	for(i=0;i<n;i++)
	cin>>a[i];
	cin>>index;

	for(int j=index;j<n;j++)
	{
		a[j]=a[j+1];
	}
	for(i=0;i<n-1;i++)
	cout<<a[i]<<" ";
}

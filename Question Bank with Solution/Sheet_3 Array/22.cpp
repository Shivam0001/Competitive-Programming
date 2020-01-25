#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i=0,j=0,k=0,c=0;
	cin>>n;
	
	int a[n],b[m];
	for(i=0;i<n;i++)
	cin>>a[i];
	
int temp=a[0];
	for(int j=0;j<n;j++)
	{
		a[j]=a[j+1];
	}
	a[n-1]=temp;
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
	
}

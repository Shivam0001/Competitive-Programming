#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i=0,j=0,k=0,c=0;
	cin>>n;
	
	int a[n],b[m];
	for(i=0;i<n;i++)
	cin>>a[i];
	

	for(int j=0;j<n;j++)
	{
		if(a[j]==1)
		c++;
	}
	if(c%2==0)
	cout<<"0";
	else
	cout<<"1";
}

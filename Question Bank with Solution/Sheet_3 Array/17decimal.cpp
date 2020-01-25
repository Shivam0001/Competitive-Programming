#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i=0,j=0,k=0,first=0,second=0,mul=1;
	cin>>n;
	
	int a[n],b[m];
	for(i=0;i<n;i++)
	cin>>a[i];

	
	for(i=n-1;i>=0;i--)
	{
		first+=a[i]*mul;
		//second+=b[i]*mul;
		mul*=2;
	}
	cout<<first;
}

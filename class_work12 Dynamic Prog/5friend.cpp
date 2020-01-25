#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,m,sum;
	cin>>n;
	int p[n+1];
	for(int i=0;i<=2;i++)
	p[i]=i;
	 
	for(int i=3;i<=n;i++)
	{ 
		p[i]=p[i-1]+(i-1)*p[i-2];
		cout<<p[i]<<" ";
	}
	cout<<p[n];

}

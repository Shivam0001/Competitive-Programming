#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,i,sum,j,f[10]={0};
	cin>>n;
//	cin>>sum;
	int a[n];

	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		f[a[i]]++;
	}
	
for(i=0;i<=9;i++)
{
	if(f[i]!=0)
	cout<<i<<":"<<f[i]<<endl;
}
//	cout<<"No";
	
}

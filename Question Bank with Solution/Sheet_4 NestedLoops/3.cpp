#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,i,sum,element,j,f[10]={0};
	cin>>n;
//	cin>>sum;
	int a[n];

	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		f[a[i]]++;
	}
	int max=f[0];
for(i=1;i<=9;i++)
{
	if(f[i]>max)
	{
	max=f[i];
	element=i;
}	
}
cout<<element;
}
//	cout<<"No";
	


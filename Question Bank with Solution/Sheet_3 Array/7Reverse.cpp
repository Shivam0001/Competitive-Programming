#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,c=0;
	float temp;
	cin>>n;
	int a[n];
	int b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
		for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	float max=(float)(a[0]/b[0])*100;
	for(i=1;i<n;i++)
	{
		temp=(a[i]/b[i])*100;
		if(temp>max)
		max=temp;
	}
	
	cout<<max;
}

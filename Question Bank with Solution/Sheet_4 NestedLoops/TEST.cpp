#include<bits/stdc++.h>
using namespace std;
int minimum(int a[],int n)
{
	//cout<<"n"<<n;
	int min=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	return min;
}

using namespace std;
int main()
{
	int n,i,k=0,s=0,j;
	cin>>n;
	int a[n];
	int t[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{k=0;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
				t[k]=abs(a[i]-a[j]);
				k++;
			}
		}
		s+=minimum(t,k);
	}
	cout<<s;
		
}

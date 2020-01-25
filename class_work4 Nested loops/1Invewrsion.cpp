#include<bits/stdc++.h>

using namespace std;

int inversion(int a[],int n)
{
	int c=0;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
				c++;
	return c;
}

int main()
{
	int n,i;
	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
		cin>>a[i];
	
	cout<<inversion(a,n);
}

#include<bits/stdc++.h>

using namespace std;

void reverse(int a[],int begin,int end,int n)
{
//	cout<<begin<<" "<<end<<endl;
	if(end>=n)
	end=n-1;
	for(int i=begin;i<=(begin+end)/2;i++)
	{
		int t=a[begin];
		a[begin]=a[end];
		a[end]=t;
		begin++;
		end--;
	}
}

int main()
{
	int n,i,k;
	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	i=0;
	while(i<n)
	{
	reverse(a,i,i+k-1,n);
	i=i+k;
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,sum=0;
	cin>>n;
	unordered_map <int,int> hash;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		sum+=a[i];

		if(hash.find(sum,i)==hash.end())
		{
			cout<<hash[i]<<endl;
			hash[a[i]]=sum;
		}
		else
		cout<<i<<" hh"<<hash[sum];
	
	}
	}
	
	


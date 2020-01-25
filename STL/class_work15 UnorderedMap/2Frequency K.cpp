#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,k;
	cout<<"Enter n and k";
	cin>>n>>k;
	unordered_map <int,int> hash;
	int a[n];
	for( i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		hash[a[i]]++;
	}
	for(auto it=hash.begin();it<hash.end();it++)
	{
		if(it->second==k)
		cout<<it->first<<" "<<it->second;
		cout<<endl;
	}
	
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	unordered_map <int,int> hash;
	int a[n];
	for( i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		hash[a[i]]++;
	}
	for(auto it=hash.begin();it!=hash.end();it++)
	{
		cout<<it->first<<" "<<it->second;
		cout<<endl;
	}
	
}

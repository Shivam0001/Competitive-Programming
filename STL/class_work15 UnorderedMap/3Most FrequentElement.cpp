#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,k;
	
	cin>>n;
	unordered_map <int,int> hash;
	int a[n];
	for( i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		hash[a[i]]++;
	}
	int max=0,element;
	for(auto it=hash.begin();it!=hash.end();it++)
	{
		if(it->second>max)
		{
			max=it->second;
			 element=it->first;
		}
		
	}
	cout<<element;
		cout<<endl;
	
}

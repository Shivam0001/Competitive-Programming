#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,k,m;
	cout<<"ENter n and m";
	cin>>n>>m;
	unordered_map <int,int> hash;
	
	int a[n],b[m];
	cout<<"ENter array";
	for( i=0;i<n;i++)
	cin>>a[i];
	cout<<"ENter subarray";
	for( i=0;i<m;i++)
	cin>>b[i];
	for(i=0;i<n;i++)
	{
		hash[a[i]]++;
	}
	int flag=0;
	for( i=0;i<m;i++)
	{
		if(hash.find(b[i])==hash.end())
		{
			cout<<b[i]<<" Not found in A";
			flag=1;
		}
		else if(hash[b[i]]==0)
		{
			cout<<"Not Present";
			flag=1;
		}
		hash[b[i]]--;
	}
	if(flag==0)
	cout<<"B is present in A";
		cout<<endl;
	
}

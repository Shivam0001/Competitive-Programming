#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,k,m;
	cin>>n;
	unordered_map <int,int> hash;
	
	int a[n],max=INT_MIN,distance;
	for( i=0;i<n;i++)
	cin>>a[i];

	for( i=0;i<n;i++)
	{
		if(hash.find(a[i])==hash.end())
		{
			hash[a[i]]=i;
		}
		else
		{
		//	cout<<"i"<<i<<"hash"<<hash[a[i]];
			 distance =i-hash[a[i]];
			if(distance>max)
			max=distance;
		}
	}
	cout<<"Max:"<<max;
	
}

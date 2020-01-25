#include<bits/stdc++.h>
using namespace std;

int main()
{
	int globalmax=INT_MIN;
	int localmax=0;
	int a[]={2,-1,3,3,-6,-6,-7};
	int n=7;
	for(int i=0;i<n;i++)
	{
		localmax+=a[i];
		if(globalmax<localmax)
			globalmax=localmax;
		if(localmax<0)
			localmax=0;
	}
	cout<<globalmax;
}

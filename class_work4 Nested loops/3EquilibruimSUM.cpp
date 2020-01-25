#include<bits/stdc++.h>

using namespace std;


int main()
{
	int n,i,flag,j,rsum=0;
	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
		cin>>a[i];
	
	int lsum=a[0];
	for(i=2;i<n;i++)
		rsum+=a[i];
	if(lsum==rsum)
	{
		cout<<"Position "<<"2";
		return 0;
	}
	for(i=2;i<=n-2;i++)
	{
		lsum+=a[i-1];
		rsum-=a[i];
			if(lsum==rsum)
	{
		cout<<"Position "<<i+1;
		return 0;
	}
	}
		
		
}

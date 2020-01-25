#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,k,ispace1,ispace2;
	cin>>n;
	ispace1=-1;
	ispace2=n-2;
	
	for(i=1;i<=n;i++)
	{
		cout<<i;
		for(j=1;j<=ispace1;j++)
			cout<<" ";
		if(i>1&&i<n)
			cout<<i;
		for(j=1;j<=ispace2;j++)
			cout<<" ";
		cout<<i;
		cout<<endl;
		ispace1++;
		ispace2--;
	}
	
	
	return 0;
}

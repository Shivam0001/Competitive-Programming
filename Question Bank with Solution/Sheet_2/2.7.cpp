#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,space;
	cin>>n;
	int m=n-1;
	space=n-1;
	for(i=1;i<=n;i++)
	{
		
			
		if(i==1||i==n)
		{
			for(j=1;j<=n;j++)
				cout<<j;
		}
		else
		{
			for(j=1;j<=space;j++)
				cout<<" ";
			cout<<m--;
			
		}
		cout<<endl;
		space--;
		
	}
	
	return 0;
	
}

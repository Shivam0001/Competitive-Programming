#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;


int main()
{
	int i,n,m,limit;
	cin>>n;
	limit=sqrt(n);
	for(i=1;i<=limit;i++)
	{

		if(n%i==0)
		{
			cout<<i<<" ";
		}
	}
	for(i=limit;i>=1;i--)
	{

		if(n%i==0)
		{
			cout<<n/i<<" ";
		}
	}
	
		
	}
		


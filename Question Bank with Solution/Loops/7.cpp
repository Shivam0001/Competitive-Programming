#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

	int prime(int n)
	{
	int limit=sqrt(n);	
		for(int i=2;i<=limit;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	
	}
	return 1;
	}
int main()
{
	int i,n,m;
	cin>>n>>m;
	int a=prime(n);
	int b=prime(m);

	if(a==1&&b==1)
	{
	if(abs(n-m)==2)
	cout<<"YES";
	else
	cout<<"NO";
	}
	else
	cout<<"Not Prime";
	
	
	
}

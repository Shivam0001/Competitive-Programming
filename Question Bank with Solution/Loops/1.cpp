#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int i,n,sum=0,a,fact=1;
	cin>>n;
	while(n!=0)
	{
		fact=1;
		a=n%10;
		while(a!=0)
		{
			fact*=a;
			a--;
		}
		sum+=fact;
		n=n/10;
	}
	cout<<sum;
}

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int i,n,sum=0,a;
	cin>>n;
	while(n!=0)
	{
		a=n%10;
		sum+=a;
		n=n/10;
	}
	cout<<sum;
}

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int n,sum=0,a,fact=1,i=1;
	cin>>n;
	while(n!=0)
	{
		a=n%10;
		a=a*i;
		sum+=a;
		i*=2;
		n=n/10;
	}
	cout<<sum;
}

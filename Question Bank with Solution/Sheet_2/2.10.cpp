#include<iostream>
using namespace std;

int main()
{
	int n,fterm,sterm;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%2)
		{
			fterm=i*i*2-i;
		}
		else
		{
			sterm=i*i*2-2*i;
		}
	}
	if(n%2)
	cout<<fterm;
	else
	cout<<sterm;
}

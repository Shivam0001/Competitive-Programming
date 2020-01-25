#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int i,n;
	cin>>n;
	int limit=sqrt(n);
	for(i=2;i<=limit;i++)
	{
		if((n%i)==0)
		{
			cout<<"Non Prime";
			return 0;
		}
	}
	cout<<"Prime";
}

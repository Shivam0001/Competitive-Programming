#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int i,n,powercounter;
	cin>>n;
	int limit=sqrt(n);
	for(i=2;i<=n;i++)
	{
		powercounter=0;
		while((n%i)==0)
		{
			powercounter++;
			n=n/i;
		}
		if(powercounter!=0)
		cout<<i<<"^"<<powercounter<<endl;
	}
}

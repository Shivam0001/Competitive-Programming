#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	int i,n,m,limit;
	cin>>n;
	limit=n/2;
	int c=0;
	for(i=2;i<=limit;i++)
	{

		while(n%i==0)
		{
			n=n/i;
			c++;
		}if(c>=3)break;
	}
		if(c==2)
			{
				cout<<"YES";
			}
			else
			{
			cout<<"NO";
			}
		
	}
		


#include<bits/stdc++.h>
using namespace std;
int flag;
int  check(int a,int b)
{
	
	
}

int main()
{
	int t,n,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%2==0)
		{
			a=n/2-1;
			b=n-a;
			if(a%2==0)
			{
				a=a-1;
				b=n-a;
			}
		}
		else
		{
			a=n/2;
			b=n-a;
		}
		cout<<a<<" "<<b<<endl;
	}
	
}

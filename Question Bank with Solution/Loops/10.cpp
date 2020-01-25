#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
	int i,n,m,t;
	cin>>n>>m;
	int a=n;
	int b=m;

	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	if(a==1)
	cout<<"Co-Prime";
	else
	cout<<"Not Co-Prime";
		
}

#include<iostream>
using namespace std;

int main()
{
	int i,n=5,a,r; 
	cin>>a;
	cin>>r;
	int sum=a,term=a;
for(i=2;i<=n;i++)
{
	term*=r;
	sum+=term;
}
	cout<<term<<" "<<sum;
	return 0;
}


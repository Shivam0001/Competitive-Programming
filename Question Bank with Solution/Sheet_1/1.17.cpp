#include<iostream>
using namespace std;

int main()
{
	int x,i=1,n,d,a,b,c; 
	cin>>n;
	cin>>a>>b>>c;
	int term=a,sum=a;
	d=b-a;
	if(n==1)
	{
	cout<<a<<endl;
	cout<<sum;
	return 0;
	}
	cout<<a;
	for(i=2;i<=n;i++)
	{
		term+=d;
		sum+=term;
		cout<<term;
	}
	cout<<endl;
	cout<<sum;
	return 0;
}


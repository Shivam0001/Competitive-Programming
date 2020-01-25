#include<iostream>
using namespace std;

int main()
{
	long int a,b,sum;
	int n,i;
	cin>>a>>b;
	cin>>n;
	if(n==1)
	{
		cout<<a<<","<<b;
		cout<<"sum="<<a+b;
		return 0;
	}
	cout<<a<<","<<b<<",";
	sum=a+b;
	for(i=3;i<=2*n;i++)
	{
		if(i%2==0)
		{
			
			b*=2;
			cout<<b<<",";
			sum+=b;
		}
		else
		{
			
			a*=3;
			cout<<a<<",";
			sum+=a;
		}
	}
	
	cout<<endl;
	cout<<"sum="<<sum;
	return 0;	
}

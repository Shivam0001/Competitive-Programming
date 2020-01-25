#include<iostream>
using namespace std;

int main()
{
	int x,i=1,n; 
	cin>>x;
	cin>>n;
	float term=x,sum=x;
	n--;
	while(n)
	{
		term=term*x*x/(i+1)*(i+2);
		sum+=term*sign;
		sign*=-1;
		i+=2;
		n--;
	}
	cout<<term<<" "<<sum;
	return 0;
}


#include<iostream>
using namespace std;

int main()
{
	int x,i=1,n; 
	cin>>x;
	int sign=-1;
	float term=1,sum=1;
	while(term>10e-5)
	{
		term=term*x/i;
		sum+=term;
		i++;
	}
	cout<<term<<" "<<sum;
	return 0;
}


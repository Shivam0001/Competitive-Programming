#include<iostream>
using namespace std;

int main()
{
	int i,j,n=4,counter=1,sign=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		cout<<sign*counter;
		counter++;
	}
	sign*=-1;
	cout<<endl;
	}
}

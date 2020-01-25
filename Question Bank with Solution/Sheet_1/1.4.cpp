#include<iostream>
using namespace std;

int main()
{
	int i,j,n=4,counter=1,no=2;
	for(i=1;i<=n;i++)
	{
		if(i%2)
		{
			
		for(j=1;j<=i;j++)
		{
		cout<<counter++;
		}
		counter+=no;
		no+=2;
		}
else
{
	int	print=counter-1;
	for(j=1;j<=i;j++)
		{
		cout<<print--;
	}
}
	cout<<endl;
	}
}

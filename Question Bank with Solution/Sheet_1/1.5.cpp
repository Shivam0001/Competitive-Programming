#include<iostream>
using namespace std;

int main()
{
	int i,j,n=4,counter=1,no=2,print;
	for(i=1;i<=n;i++)
	{
		print=counter;
		for(j=1;j<=i;j++)
		{	
		cout<<print--;
		}
	counter=counter+no;
	no++;
	cout<<endl;
	}
}

#include<iostream>
using namespace std;

int main()
{
	int i,j,k,n=4,space=n-1,stars=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=space;j++)
		{
		cout<<" ";
		}
		for(k=1;k<=stars;k++)
		{
			cout<<"*";
		}
		stars+=2;
		space--;
	cout<<endl;
	}
}

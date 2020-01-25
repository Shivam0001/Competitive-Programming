#include<iostream>
using namespace std;

int main()
{
	int i,j,k,n=5,space=n-3,stars=1;
	for(i=1;i<=n;i++)
	{
		if(i<=(n/2)+1)
		{
		
		for(j=1;j<=space;j++)
		{
		cout<<" ";
		}
		for(k=1;k<=stars;k++)
		{
			cout<<"*";
		}
		if(i!=(n/2)+1)
		{
		stars+=2;
		space--;
		}
		cout<<endl;
		
		}
		
		else
		{
			space++;
			stars-=2;
		for(j=1;j<=space;j++)
		{
		cout<<" ";
		}
		for(k=1;k<=stars;k++)
		{
			cout<<"*";
		}
		cout<<endl;	
		}
	}
}

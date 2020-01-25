#include<iostream>
using namespace std;

int main()
{
	int i,j,k,l,n=5,space=n/2,stars=1,interspace=-1;
	for(i=1;i<=n;i++)
	{
		if(i<=(n/2)+1)
		{
		
		for(j=1;j<=space;j++)
		{
		cout<<" ";
		}
		
			cout<<"*";
		
		
		for(l=1;l<=interspace;l++)
		{
			cout<<" ";
		}
		if(i!=1)
		{
			cout<<"*";
		}
	
		space--;
		interspace+=2;
		
		cout<<endl;
		
		}	
	}
	
		space=1,interspace-=4;
		for(i=(n/2)+2;i<=n;i++)
		{
			
		for(j=1;j<=space;j++)
		{
		cout<<" ";
		}
					cout<<"*";
	
		for(l=1;l<=interspace;l++)
		{
			cout<<" ";
		}
		if(i!=n)
		{
			cout<<"*";
		}
		cout<<endl;	
		space++;
			interspace-=2;
		}
	}

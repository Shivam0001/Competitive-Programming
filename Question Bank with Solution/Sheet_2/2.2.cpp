#include<iostream>
using namespace std;

int main()
{
	int r,c,i,j,k,l,space=0,ispace;
	cin>>r>>c;
	ispace=c-1;
	
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=space;j++)
		cout<<" ";
		if(i==1||i==r)
		{
			for(k=1;k<=c;k++)
				cout<<"*";
		}
		else
		{
			cout<<"*";
			for(l=1;l<=ispace;l++)
				cout<<" ";
			cout<<"*";
		}
		cout<<endl<<endl;
		space++;
	}
}

#include<bits/stdc++.h>
using namespace std;
void shivam()
{
	int a=4,b=7;
	int c=a+b;
	c=a*b;
	return ;
}
int main()
{
	shivam();
	int n,i,j,k,space=0,first=1,second;
	int z;
	int zz;
	int zzz;
	int zzzz;
	cin>>n;
	int m=n;
	second=n*n+1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=space;j++)
			cout<<"**";
		for(k=1;k<=m;k++)
			{
				
				cout<<first<<"0";
				first++;	
			}
		for(k=1;k<=m;k++)
			{
				if(k==m)
				cout<<second;
				else
				cout<<second<<"0";
				second++;	
			}
		cout<<endl;
		m--;
		second-=2*m+1;	
		space++;
		int z=2*4;
		
	}
}

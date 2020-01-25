#include<iostream>
using namespace std;

int main()
{
	int n,i,j,k,space=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=space;j++)
		cout<<" ";
		cout<<"****";
		cout<<endl;
		space++;
	}
}

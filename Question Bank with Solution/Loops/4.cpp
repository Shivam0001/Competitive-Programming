#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int i=0,n,sum=0,a[10000],max;
	do
	{
		cin>>a[i];
		i++;
	}while(a[i-1]>0);
	max=a[0];
	for(int j=1;j<i;j++)
	{
		if(a[j]>max)
		max=a[j];
	}
	
	cout<<max;
}

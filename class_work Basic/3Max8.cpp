#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int max1,max2,max3,n,i;
	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
		cin>>a[i];
	
	max1=a[0];
	max2=max3=INT_MIN;
		
	for(i=1;i<n;i++)
	{	
		if(a[i]>max1)
		{
			max3=max2;
			max2=max1;
			max1=a[i];
		}
		else if(a[i]>max2)
		{
			max3=max2;
			max2=a[i];
		}
		else if(a[i]>max3)
			max3=a[i];
	}
	cout<<max3;
}

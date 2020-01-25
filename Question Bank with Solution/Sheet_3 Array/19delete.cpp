#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i=0,j=0,k=0,max2=INT_MIN,max1,max3;
	cin>>n;
	
	int a[n],b[m];
	for(i=0;i<n;i++)
	cin>>a[i];
	max1=a[0];
	for(i=1;i<n;i++){
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
		{
			//max3=max2;
			max3=a[i];
		}
	}
	cout<<max3<<" ";
	for(i=0;i<n;i++)
	{
		if(a[i]==max2)
		break;
	}
	//<<i<<" ";
	for(int j=i;j<n;j++)
	{
		a[j]=a[j+1];
	}
	for(i=0;i<n-1;i++)
	cout<<a[i]<<" ";
}

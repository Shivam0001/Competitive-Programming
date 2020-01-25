#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i=0,j=0,k=0,c=0;
	cin>>n;
	
	int a[n],b[m];
	for(i=0;i<n;i++)
	cin>>a[i];
	

	for( i=0;i<n;i++)
	{
		if(a[i]==0&&i%2==0||a[i]==1&&i%2==1)
		continue;
		else
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[j]==0&&j%2==1||a[j]==1&&j%2==0)
				{
					int t=a[i];
					a[i]=a[j];
					a[j]=t;
					break;
				}
			}
		}
		
	}
	
	for(int j=0;j<n;j++)
	{
		cout<<a[j]<<" ";
	}
	
}

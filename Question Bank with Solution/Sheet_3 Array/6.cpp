#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i=0,j=0,k=0,first=0,second=0,mul=1;
	cin>>n>>m;
	
	int a[n],b[m];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<m;i++)
	cin>>b[i];
	for(i=0;i<n;i++)
		{
		for(int j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				a[i]=INT_MIN;
				b[j]=INT_MIN;
				//cout<<a[i]<<endl;
				break;
			}
		}
	
		}
		for(j=0;j<n;j++)
		if(a[j]>INT_MIN)
		cout<<a[j]<<" ";
		
}


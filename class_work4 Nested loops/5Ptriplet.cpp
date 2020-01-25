#include<bits/stdc++.h>

using namespace std;

bool ptriplet(int a[],int n)
{
	//cout<<"hu";
	int i,j,k;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			for(k=0;k<n;k++)
				if(j!=i && j!=k && i!=k)
					if(a[i]*a[i]+a[j]*a[j]==a[k]*a[k])
						return true;
	 return false;
}

int main()
{
	int n,i;
	cin>>n;
	int a[n];

	for(i=0;i<n;i++)
		cin>>a[i];
	
	cout<<ptriplet(a,n);
}

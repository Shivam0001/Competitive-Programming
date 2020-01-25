#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,m,i,j,t,sumr=0,sumc=0,sumd1=0,sumd2=0;
	cin>>n;
	int a[n][n],sumrow[n],sumcol[n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sumr+=a[i][j];
			sumc+=a[j][i];
			
		}
		sumrow[i]=sumr;
		sumcol[i]=sumc;
	}
	for(i=0;i<n;i++)
	{
		cout<<sumrow[i]<<":";
		sumd1+=a[i][i];
		sumd2+=a[i][n-1-i];
	}
	cout<<sumd1<<":"<<sumd2<<endl;
	if(sumd1==sumd2)
	{
		for(i=0;i<n-1;i++)
		{
			if(sumrow[i]!=sumrow[i+1] || sumcol[i]!=sumcol[i+1])
			{
				cout<<"NO";
				return 0;
			}
		}
		cout<<"Magic Matrix";
		return 0;
	}
	else
	cout<<"NO";
	

	
}

#include<bits/stdc++.h>

using namespace std;
int main()
{
	int n,i,k=0,a,b,j;
	cin>>n;
	cin>>a>>b;
	int ar[n];
	int mat[a][b];

	for(i=0;i<n;i++)
		cin>>ar[i];
	for(i=0;i<a;i++)
	{ 
		for(j=0;j<b;j++)
		{
		
		mat[i][j]=ar[k];
		k++;
	}
		
		}
		for(i=0;i<a;i++)
	{ 
		for(j=0;j<b;j++)
		{cout<<mat[i][j]<<" ";
	}
	cout<<endl;
			
}

}
//	cout<<"No";
	


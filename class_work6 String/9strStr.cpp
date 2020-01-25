#include<bits/stdc++.h>
using namespace std;

int main()
{
	char t[10000],p[10000];
	int i,j,n,m;
	cin>>t;
	 n=strlen(t);
	cin>>p;
	 m=strlen(p);

	for(i=0;i<n-m;i++)
	{
		j=0;
		while(j<m&&p[j]==t[i+j])
		{
			j=j+1;
		}
		if(j==m)
		{
			cout<<i;
			return 0;
		}
	}
	
	cout<<"Not Present";

	return 0;
}

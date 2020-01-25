#include<bits/stdc++.h>
using namespace std;

int main()
{
	char c[10000];
	cin>>c;
	int len=strlen(c);
	int i,j,k;
	for(i=0;i<len;i++)
	{
		for(j=i;j<len;j++)
		{
			for(k=i;k<=j;k++)
			{
				cout<<c[k];
			}
			cout<<endl;
		}
	}
	
	return 0;
}

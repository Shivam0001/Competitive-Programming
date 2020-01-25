#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	char a[1000000];
	cin>>a;
	int len=strlen(a);
	int i=0,j=0;
	for(i=0;i<len;i++)
	{
		for(j=i;j<len;j++)
		{
			for(int k=i;k<=j;k++)
			{
				cout<<a[k];
			}
			cout<<endl;
		}
	}
	
}

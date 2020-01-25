#include<bits/stdc++.h>
using namespace std;

void rmvDuplicate(char c[],int len)
{
	int k=0,flag=0,i;
	char check[10000];
	for(i=0;i<len;i++)
	{
		if(c[i]!=c[i+1])
		{
			check[k]=c[i];
			k++;
		}
		
	}
	strcpy(c,check);
	cout<<c;
	cout<<endl;
}
int main()
{
	char c[10000],b[100000];
	cin>>c;
	int len1=strlen(c);
	cin>>b;
	int len2=strlen(b);

	rmvDuplicate(c,len1);
	rmvDuplicate(b,len2);

	for(int i=0;b[i]!='\0';i++)
	{
		if(b[i]==c[i])
		{
			continue;
		}
		else
		{
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
}

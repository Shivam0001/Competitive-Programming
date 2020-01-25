#include<bits/stdc++.h>
using namespace std;
void sort(char c[])
{
	
	int count[26]={0};
	int len=strlen(c);
	int i,index;
	char b[len];
	for(i=0;i<len;i++)
	{
		count[c[i]-'a']++;
	}
	for(i=1;i<26;i++)
	{
		count[i]+=count[i-1];
	}
	for(i=0;i<len;i++)
	{
		index=count[c[i]-'a']-1;
		b[index]=c[i];
		count[c[i]-'a']--;
	}
	for(i=0;i<len;i++)
	{
		c[i]=b[i];
	}
	
}
int main()
{
	char c[10];
	cin>>c;
	sort(c);
	cout<<c;
	return 0;
}


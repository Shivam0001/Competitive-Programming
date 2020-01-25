#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,temp,minm,maxm;
	int  f[26]={0},firstval=INT_MIN,c=0;
	int min=INT_MAX,max=INT_MIN;
	getline(cin,s);
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		f[s[i]-'a']++;
	}
	for(int i=0;i<26;i++)
	{
		if(f[i]>max)
		{
			max=f[i];
		}		
	}
	
	for(int i=0;i<26;i++)
	{
		if(f[i]!=0)
		{
			if(f[i]!=max-1)
			{
				c++;
			}	
		}
	}
	if(c==1)
	cout<<"YES";
	else
	cout<<"NO";
	
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,temp,minm,maxm;
	int min=INT_MAX,max=INT_MIN;
	getline(cin,s);
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		continue;
		else
		cout<<s[i];
	}
	
	
}

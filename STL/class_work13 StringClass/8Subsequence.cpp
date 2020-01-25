#include<bits/stdc++.h>
using namespace std;

int subsequence(string s1,string s2)
{
	cout<<s1<<s2;
	int i=0,j=0;
	int l1=s1.length();
	int l2=s2.length();
	while(i<l1 && j<l2)
	{
		if(s1[i]==s2[j])
		{
			i++;
			j++;
		}
		else
		{
			j++;
		}
	}
	if(i==l1)
	return 1;
	else
	return 0;
}


int main()
{
	int c;
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int flag=0;
	if(s1.length()<s2.length())
	{
		c=subsequence(s1,s2);
	}
	else
	c=subsequence(s2,s1);
	
	if(c==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}

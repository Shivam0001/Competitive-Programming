#include<bits/stdc++.h>
using namespace std;

int main()
{
	char c[10000],b[10000];
	cin>>c;
	int len1=strlen(c);
	cin>>b;
	int len2=strlen(b);
	if(len1!=len2)
	{
	cout<<"Not Anagram";
	return 0;
	}
	else
	{
		sort(c,c+len1);
		sort(b,b+len2);
	}
	if(strcmp(b,c)==0)
	{
		cout<<"Anagaram";
	}
	else
	cout<<"Not Anagaram";
	return 0;
}

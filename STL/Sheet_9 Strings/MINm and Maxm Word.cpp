#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,temp,minm,maxm;
	int min=INT_MAX,max=INT_MIN;
	getline(cin,s);
	stringstream ss(s);
	
	while(ss >> temp)
	{
		int len=temp.length();
		if(len<min)
		{
		min=len;
		minm=temp;
		}
		if(len>max)
		{
			max=len;
			maxm=temp;
		}
	}
	cout<<"min "<<minm<<"max "<<maxm;
	
	
}

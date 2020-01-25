#include<bits/stdc++.h>
using namespace std;

void print(string s,int l, int r)
{
	if(l==r)
	{
		//if(s[i])
		cout<<s<<endl;
		return ;
	}
	
	for(int i=l;i<r;i++)
	{
		//cout<<i<<" "<<l;
	swap(s[l],s[i]);
	print(s,l+1,r);
	swap(s[l],s[i]);
	
	}
	
}


int main()
{
	string s;
	cin>>s;
	int l=s.length();
	print(s,0,l);
}

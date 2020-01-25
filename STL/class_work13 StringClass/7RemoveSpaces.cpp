#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	getline(cin,a);
	int len=a.length();
	int pos=a.find(' ');
	while(pos!=-1)
	{	
	a.erase(pos,1);
	pos=a.find(' ');
	}
	cout<<a;
	return 0;
}

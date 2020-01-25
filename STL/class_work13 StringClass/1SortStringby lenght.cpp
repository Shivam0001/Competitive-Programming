#include<bits/stdc++.h>
using namespace std;
bool compare(string &s1,string &s2)
{
	return s1.size()<s2.size();
}

int main()
{
	string a[]={"ramanclasses","ishdfgdhgfd","monday"};
	sort(a,a+3,compare);
	for(int i=0;i<3;i++)
	cout<<a[i]<<endl;	
}

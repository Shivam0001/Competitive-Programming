#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,input;
	vector <int> a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>input;
		a.push_back(input);
	}
	
	for(auto i=a.begin();i<a.end();i++)
		cout<<*i<<" ";
	for(auto i=a.begin();i<a.end();i++)
		{
			auto j=min_element(i,a.end());
			if(i!=j)
			swap(*i,*j);
		}
		cout<<endl;
	for(auto i=a.begin();i<a.end();i++)
		cout<<*i<<" ";
}

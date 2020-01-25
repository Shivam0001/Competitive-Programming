#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,input;
	vector <int> a{1,3,5,6,8};
	vector <int> b{3,6,7};
	vector <int> c(a.size()+b.size());
	vector <int> d(a.size()+b.size());
	vector <int> e(a.size()+b.size());
	
	vector <int>::iterator it,it1,it2;
	it=set_union(a.begin(),a.end(),b.begin(),b.end(),c.begin());
	while(*(c.end()-1)==0)
	c.erase(c.end()-1);
	for(auto i=c.begin();i<c.end();i++)
	{
	cout<<*i<<" ";
	}
	cout<<endl;
	
	it1=set_intersection(a.begin(),a.end(),b.begin(),b.end(),d.begin());
	while(*(d.end()-1)==0)
	d.erase(d.end()-1);
	for(auto i=d.begin();i<d.end();i++)
	cout<<*i<<" ";
	cout<<endl;
	
	it2=set_difference(a.begin(),a.end(),b.begin(),b.end(),e.begin());
	while(*(e.end()-1)==0)
	e.erase(e.end()-1);
	for(auto i=e.begin();i<e.end();i++)
	cout<<*i<<" ";
	
}

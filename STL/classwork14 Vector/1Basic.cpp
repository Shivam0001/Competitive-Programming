#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector <int> a{1,2,3,0};
	cout<<"Print as array ";
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" ";
		cout<<endl;
	
	cout<<"Print using auto ";
	for(auto i=a.begin();i<a.end();i++)
		cout<<*i<<" ";
		
	auto min=min_element(a.begin(),a.end());
	int max=*max_element(a.begin(),a.end());
	int sum=accumulate(a.begin(),a.end(),0);
	cout<<endl<<"MIN "<<*min<<" MAX "<<max<<" SUM "<<sum;
	
	a.insert(a.begin(),-10);
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" ";
		cout<<endl;
		
	a.insert(max_element(a.begin(),a.end()),-10);
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" ";
		cout<<endl;
}

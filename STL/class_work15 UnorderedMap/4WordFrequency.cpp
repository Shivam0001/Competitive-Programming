#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,k;
	
	
	unordered_map <string,int> hash;
	string s,word;
	getline(cin,s);
	stringstream ss(s);
	while(ss>>word)
	{
		hash[word]++;
	}
	//int max=0,element;
	for(auto it=hash.begin();it!=hash.end();it++)
	{
		cout<<it->first<<" "<<it->second;
		cout<<endl;
		}
	
}

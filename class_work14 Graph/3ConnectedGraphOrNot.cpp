#include<bits/stdc++.h>
using namespace std;

void addedge(vector<pair<int,int> > adj[],int v1,int v2,int wt)
{
	adj[v1].push_back(make_pair(v2,wt));
	adj[v2].push_back(make_pair(v1,wt));
}
void print(vector<pair<int,int> > adj[],int v)
{
	for(int i=0;i<v;i++)
	{
		cout<<i;
		for(auto x:adj[i])
		{
			cout<<"->"<<x.first<<" "<<x.second;
		}
		cout<<endl;
	}
}
int main()
{
	int v,e,v1,v2,wt;
	cout<<"Enter v  and e:";
	cin>>v>>e;
	vector<pair<int,int> > adj[v];
	for(int i=0;i<e;i++)
	{
		cin>>v1>>v2;
		cin>>wt;
		addedge(adj,v1,v2,wt);
	}
	print(adj,v);
}

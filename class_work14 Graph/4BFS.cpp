#include<bits/stdc++.h>
using namespace std;
int v;
void addedge(vector<int> adj[],int v1,int v2)
{
	adj[v1].push_back(v2);
	adj[v2].push_back(v1);
}
void print(vector<int> adj[],int v)
{
	for(int i=0;i<v;i++)
	{
		cout<<i;
		for(auto x:adj[i])
			cout<<"->"<<x;
		cout<<endl;
	}
}
void bfs(vector<int> adj[],int s)
{
	int level[v];
	bool visited[v];
	memset(visited,false,sizeof(visited));
	queue<int> q;
	q.push(s);
	visited[s]=true;
	level[s]=0;
	cout<<"Printing Queue";
	while(!q.empty())
	{
		int p=q.front();
		cout<<q.front()<<"->";
		q.pop();
		for(auto i=adj[p].begin();i<adj[p].end();i++)
		{
			if(!visited[*i])
			{
				visited[*i]=true;
				level[*i]=level[p]+1;
				q.push(*i);
			}
		}
	}
}
int main()
{
	int e,v1,v2;
	cout<<"Enter v and e";
	cin>>v>>e;
	vector<int> adj[v];
	cout<<"Enter edge"<<endl;
	for(int i=0;i<e;i++)
		{
			cin>>v1>>v2;
			addedge(adj,v1,v2);
		}
	print(adj,v);
	bfs(adj,0);
}


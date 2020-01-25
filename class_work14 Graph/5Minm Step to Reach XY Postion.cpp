#include<bits/stdc++.h>
using namespace std;
int x,y,n;
	bool visited[100][100];
	int level[100][100];
int BFS(int a[][100],int aa,int b)
{
	int i,j;
	if(aa==x&& b==y)
	return 1;
	queue <pair<int,int> > q;
	visited[0][0]=true;
	level[0][0]=0;
	q.push(make_pair(0,0));
	while(!q.empty())
	{
		
		auto it=q.front();
		i=it.first;
		j=it.second;
		cout<<it.first<<" "<<it.second<<endl;
		q.pop();
		if(i==x&& j==y)
			return 1;
		if(i>=0 && j-1>=0 && !visited[i][j-1] && a[i][j-1]!=0)
		{
			visited[i][j-1]=true;
			level[i][j-1]=level[i][j]+1;
			q.push(make_pair(i,j-1));
		}
		if(i-1>=0 && j<n && !visited[i-1][j] && a[i-1][j]!=0)
		{
			visited[i-1][j]=true;
			level[i-1][j]=level[i][j]+1;
			q.push(make_pair(i-1,j));
		}
		if(i>=0 && j+1<n && !visited[i][j+1] && a[i][j+1]!=0)
		{
			visited[i][j+1]=true;
			level[i][j+1]=level[i][j]+1;
			q.push(make_pair(i,j+1));
		}
		if(i+1<n && j<n && !visited[i+1][j] && a[i+1][j]!=0)
		{
			visited[i+1][j]=true;
			level[i+1][j]=level[i][j]+1;
			q.push(make_pair(i+1,j));
		}
		
	}
	return 0;
	
}


int main()
{
	
	cin>>n;
	int i,j,a[100][100];

	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			visited[i][j]=false;
			level[i][j]=0;
		}
	}
	
	cin>>x>>y;
	
	if(BFS(a,0,0))
	cout<<level[x][y]<<" FOUND";
	else
	cout<<"NOT FOUND";
}

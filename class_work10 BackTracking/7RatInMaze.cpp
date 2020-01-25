#include<bits/stdc++.h>
using namespace std;
int n;
int issafe(int a[][4],int x,int y)
{
	if(x>=0 && x<=n-1 && y>=0 && y<=n-1&& a[x][y]==1) return 1;
	return 0;
}
int flag;
int solvemaze(int a[][4],int x,int y)
{
	if(x==n-1 && y==n-1) return 1;
	if(issafe(a,x,y))
	{
		return solvemaze(a,x,y+1)||solvemaze(a,x+1,y);
	}
	return 0;
}

int main()
{
	int a[][4]={ {1,1,0,0},
				{1,1,1,0},
				{1,0,1,1},
				{1,1,0,1}
			  };
		 n=4;
		cout<<solvemaze(a,0,0);  
			  
}




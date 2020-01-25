#include<bits/stdc++.h>
using namespace std;
int pal(int n,int temp)
{
	
	if(n==0)
	return temp;
	temp=temp*10 +n%10;
	return pal(n/10,temp);
}
int main()
{
	int n,m;
	cin>>n;
	int temp=pal(n,0);

	if(temp==n)
	cout<<"Yes";
	else
	cout<<"No";
}


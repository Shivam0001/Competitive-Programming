#include<bits/stdc++.h>
using namespace std;
int pow(int a,int b)
{
	
	if(b==0)
	return 1;
	
	return a*pow(a,b-1);
}
int main()
{
	int n,m;
	cin>>n>>m;
	cout<<pow(n,m);


}


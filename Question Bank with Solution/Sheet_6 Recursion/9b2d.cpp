#include<bits/stdc++.h>
using namespace std;
int b2d(int n,int exp)
{
	
	if(n==0)
	return 0;
	return n%10*pow(2,exp)+b2d(n/10,exp+1);

}
int main()
{
	int n,m;
	cin>>n;
	cout<<b2d(n,0);


}


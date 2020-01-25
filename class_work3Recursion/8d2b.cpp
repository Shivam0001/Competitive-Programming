#include<bits/stdc++.h>
using namespace std;

 void d2b(int n)
{
	if(n==0)
	return ;
	d2b(n/2);
	cout<<n%2;

}

int main()
{
	int n,i;
	cin>>n;
	d2b(n);
}

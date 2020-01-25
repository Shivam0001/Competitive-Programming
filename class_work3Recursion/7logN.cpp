#include<bits/stdc++.h>
using namespace std;

 float logfact(int n)
{
	if(n==0)
	return 0;
	return log(n)+logfact(n-1);

}

int main()
{
	int n,i;
	cin>>n;
	cout<<logfact(n);
}

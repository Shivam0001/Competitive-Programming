#include<iostream>
using namespace std;

int main()
{
char fterm='A',sterm='Z';
int i,n=15;
cout<<fterm<<sterm<<",";
for(i=2;i<=n;i++)
{
	fterm+=2%26;
	sterm-=1%26;
	cout<<fterm<<sterm<<",";
}
return 0;
}


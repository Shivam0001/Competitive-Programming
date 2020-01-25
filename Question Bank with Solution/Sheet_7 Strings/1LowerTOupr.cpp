#include<bits/stdc++.h>
using namespace std;

int main()
{
	char c[100];
	cin>>c;
	int i=0;
	while(c[i]!='\0')
	{
		if(c[i]>='a'&&c[i]<='z')
		c[i]=c[i]-'a'+'A';
		i++;
	}
	cout<<c;
	return 0;
}

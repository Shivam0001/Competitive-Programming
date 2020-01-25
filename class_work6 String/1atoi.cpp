#include<bits/stdc++.h>
using namespace std;

int myatoi(char x[])
{
	int i=0, value=0;
	while(x[i]!='\0')
	{
		if(x[i]>='0'&&x[i]<='9')
		{
		value=value*10 + x[i]-'0';
		i++;
		}
	}
	return value;
}

int main()
{
	char c[10];
	cin>>c;
	cout<<myatoi(c)*2;
	return 0;
}

#include<bits/stdc++.h>
using namespace std;

float myatof(char x[])
{
	int i=0, value1=0,value2=0,div=1;
	float value=0;
	while(x[i]!='.')
	{
		if(x[i]>='0'&&x[i]<='9')
		{
		value1=value1*10 + x[i]-'0';
		i++;
		}
	}
	i++;
//	cout<<value1<<" ";
	while(x[i]!='\0')
	{
		if(x[i]>='0'&&x[i]<='9')
		{
		value2=value2*10 + x[i]-'0';
		i++;
		div*=10;
		}
	}
//	cout<<value2<<" ";
	value=value1+(float)value2/div;
	return value;
}

int main()
{
	char c[10];
	cin>>c;
	cout<<myatof(c)*2;
	return 0;
}

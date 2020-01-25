#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,min=INT_MAX,cal;
	stack <int> s;
	cout<<"enter n:";
	cin>>n;
	char c[n],sign;
	cin>>c;
	int len=strlen(c);
	for( i=0;i<len;i++)
	{
		if(c[i]>='0'&&c[i]<='9')
		{
		s.push(c[i]-'0');
      	}
		else
		{
			sign=c[i];
			int a=s.top();
			s.pop();
			int b=s.top();
			s.pop();
			if(sign=='+')
			{
				cal=a+b;
				s.push(cal);
			}
			if(sign=='-')
			{
				cal=b-a;
				s.push(cal);
			}
			if(sign=='*')
			{
				cal=a*b;
				s.push(cal);
			}
			if(sign=='/')
			{
				cal=b/a;
				s.push(cal);
			}
			
		}
	}
	cout<<cal;

}

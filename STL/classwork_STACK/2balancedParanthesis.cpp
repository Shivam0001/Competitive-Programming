#include<bits/stdc++.h>
using namespace std;

int main()
{
	char c[100];
	cin>>c;
	int len=strlen(c);
	stack<char> s;
	for(int i=0;i<len;i++)
	{
		if(c[i]=='('||c[i]=='{'||c[i]=='[')
		{
			s.push(c[i]);
		}
		else
		{
			if(s.empty())
			{
				cout<<"NO";
				return 0;
			}
			char temp=s.top();
			s.pop();
		
			if(c[i]==')')
			{
				//cout<<temp;
				if(temp!='(')
				{
				cout<<"1NO";
				return 0;
				}
			}
			if(c[i]=='}')
			{
				if(temp!='{')
				{
				cout<<"2NO";
				return 0;
				}
			}
			if(c[i]==']')
			{
				if(temp!='[')
				{
				cout<<"3NO";
				return 0;
				}
			}
		}
	}
	if(s.empty())
	{
		cout<<"YES";
		return 0;
	}
	else
	cout<<"4NO";
}

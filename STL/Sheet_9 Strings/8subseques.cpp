#include<bits/stdc++.h>
using namespace std;
int c=0;
void powerset(string s,int pos,int len,string out)
{
	if(pos==len)
	{
//		if(atoi(out.c_str())%6==0)
//		{  
		cout<<out;
		cout<<endl;
//		}
		return ;		
	}
	powerset(s,pos+1,len,out);
	powerset(s,pos+1,len,out+s[pos]);
	
	
}

int main()
{
	string s,out;
	out[0]=' ';
	cin>>s;
	int len=s.length();
	powerset(s,0,len,out);
}

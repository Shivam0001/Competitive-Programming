
#include<bits/stdc++.h>
using namespace std;

void powerset(char s[],int pos, int len,char out[],int index)
{
	if(pos==len)
	{
		out[index]='\0';
		cout<<out<<endl;
		return ;
	}
	powerset(s,pos+1,len,out,index);
	out[index]=s[pos];
	powerset(s,pos+1,len,out,index+1);
	
}

int main()
{
	char s[]="abc", out[200];
	int len=strlen(s);
	powerset(s,0,len,out,0);
}




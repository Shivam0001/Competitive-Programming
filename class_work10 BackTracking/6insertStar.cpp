#include<bits/stdc++.h>
using namespace std;

void insertstr(char a[],char outstr[],int pos)
{
int len=strlen(a);
	outstr[pos]=a[0];
	pos++;
for(int i=1;i<len;i++)
{
	 if(a[i]==a[i-1])
	{
		outstr[pos]='*';
		outstr[pos+1]=a[i];
		pos+=2;
	}
	else
	{
		outstr[pos]=a[i];
		pos++;
	}
}
outstr[pos]='\0';
	
}

int main()
{
	char s[]="abbbbcccdefggggghihh";
	char outstr[200];
	insertstr(s,outstr,0);
	cout<<outstr;
}




#include<iostream>
using namespace std;

int main()
{
	int i,j,n=4,bin=1,counter=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++){
		
		cout<<counter;		//or print counter%2
		counter=1-counter;
			
		}
	cout<<endl;
	}
}

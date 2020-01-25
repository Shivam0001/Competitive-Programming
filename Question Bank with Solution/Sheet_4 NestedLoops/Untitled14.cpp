#include <bits/stdc++.h>

using namespace std;



int main()
{
        int n,i,k,b,j,total=0,min,max;
    //cin>>n;
    //cin>>a>>b;
    int a[5];
    for(i=0;i<5;i++)
    {
        cin>>a[i];
         total+=a[i];

    }
    //cout<<total;
    min=max=a[0];
    //cout<<min<<max<<endl;
    for(i=1;i<5;i++)
    {
        if(a[i]<min)
        min=a[i];
        if(a[i]>max)
        max=a[i];
         
    }
    //cout<<max<<min;
    cout<<total-max<<" "<<total-min;
    return 0;
}


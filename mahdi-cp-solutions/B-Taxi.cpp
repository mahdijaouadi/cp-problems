#include<bits/stdc++.h>
using namespace std;

// You can find the problem here: https://codeforces.com/contest/158/problem/B

    
    
int main()
{
    int n,total,s,s1=0,s2=0,s3=0,s4=0;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if (s==1)
            s1++;
        else if (s==2)
            s2++;
        else if (s==3)
            s3++;
        else if (s==4)
            s4++;
    }
    total=s4;
    total+=s2/2;
    s2 = static_cast<int>(s2%2);
    
    total+=s3;
    s1=s1-s3;
    if (s2>0)
    {
        s1=s1-2;
        total+=1;
    }
    if (s1>0)
    {
        if (s1%4==0)
            total+=s1/4;
        else
            total=total+(s1/4)+1;
    }
    cout<<total<<endl;     
}
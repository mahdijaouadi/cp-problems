#include<bits/stdc++.h>
using namespace std;

// You can find the problem here: https://codeforces.com/problemset/problem/363/B

    
    
int main()
{
    int n,h,k;
    cin>>n;
    cin>>k;
    vector<int>h_vector;  
    int min_sumheight=k*101,min_index=0,current_somme=0;
    for(int i=0;i<n;i++)
    {
        cin>>h;
        h_vector.push_back(h);
        if (i<k)
            current_somme+=h;
    }
    min_sumheight=current_somme;
    min_index=1;
    for(int i=1;i<=n-k+1;i++)
    {
        if (current_somme<min_sumheight)
        {
            min_sumheight=current_somme;
            min_index=i;
        }
        current_somme=current_somme-h_vector[i-1]+h_vector[i+k-1];
    
        
    }
    cout<<min_index<<endl;
}
#include<bits/stdc++.h>
using namespace std;

// You can find the problem here: https://codeforces.com/problemset/problem/160/A
 
int main (){
    int n,total_somme=0,a,num_coins=0;
    float my_somme=0;
    vector<int>vector_coins;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vector_coins.push_back(a);
        total_somme+=a;
    }
    sort(vector_coins.begin(), vector_coins.end(), std::greater<int>());
    for(int i=0;i<n;i++)
    {
        my_somme+=vector_coins[i];
        if (my_somme/total_somme>0.5)
        {
            num_coins=i+1;
            break;
        }
    }
    cout<<num_coins<<endl;
}



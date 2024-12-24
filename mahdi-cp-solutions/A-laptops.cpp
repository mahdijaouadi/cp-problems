#include<bits/stdc++.h>
using namespace std;

// You can find the problem here: https://codeforces.com/problemset/problem/456/A
 
int main (){
    std::vector<std::pair<int, int>> vec1,vec2;
    int n,a,b,valid=1;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        vec1.push_back(make_pair(a,b));
        vec2.push_back(make_pair(a,b));
    }
    std::sort(vec1.begin(), vec1.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.first > b.first;
    });

    std::sort(vec2.begin(), vec2.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second > b.second;
    });

    for(int i=0;i<n;i++)
    {
        // cout<<"("<<vec1[i].first<<","<<vec1[i].second<<") "<<"("<<vec2[i].first<<","<<vec2[i].second<<") "<<endl;
        if (vec1[i].first!=vec2[i].first || vec1[i].second!=vec2[i].second)
        {
            valid=0;
            break;
        }
    }
    if (valid==1)
        cout<<"Poor Alex"<<endl;
    else
        cout<<"Happy Alex"<<endl;
}



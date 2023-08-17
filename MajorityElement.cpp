#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v)
{
    int n = v.size();
int i ;
    map<int,int> mpp;
    for(i=0;i<n;i++){
mpp[v[i]]++;
    }

    for (auto it: mpp)
    {
        if(it.second>(n/2)){
            return it.first;
        }
    }
return -1;
}

#include<bits/stdc++.h>
using namespace std;

int majorityHashing(vector <int> a)
{int i;
int n = a.size();
    map<int,int>mpp;
for(i=0;i<n;i++)
{
    mpp[a[i]]++;
}

for(auto it: mpp)
{
    if(it.second>n/2)
    {
        return it.first;
    }
}
return -1;
}

int main()
{
    vector <int> a = {2,2,1,3,1,1,3,1,1};
    int maj = majorityHashing(a);
    cout<<maj<<endl;
}

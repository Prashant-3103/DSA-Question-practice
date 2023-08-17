#include<bits/stdc++.h>
using namespace std;


int majority(vector<int> &a)
{
    int i,j, c=0;
    int n = a.size();
    for(i=0;i<n;i++)
    {
        c=0;
for(j=0;j<n;j++)
{
if(a[j]==a[i])
{
    c++;
}
}
if(c>n/2)
return a[i];
    }
}

int main()
{
    vector <int> a = {2,2,3,3,1,2,2,3,3,3,3,3,3};
    int maj = majority(a);
    cout<<maj<<endl;
}

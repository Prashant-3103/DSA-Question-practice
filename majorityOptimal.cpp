#include<bits/stdc++.h>
using namespace std;

int majority(vector <int> a)
{
    int c=0;
    int ans, i;
    int n = a.size();

    for(i=0;i<n;i++)
    {
        if(c==0)
       {
         c=1;
        ans=a[i];
       }
       else if(a[i]==ans)
       {
        c++;
       }
       else{
        c--;
       }
    }
    int c1=0;
    for(i=0;i<n;i++)
    {
        if(a[i] == ans)
        c1++;
    }
    if(c1>n/2)
    {
        return ans;
    }
    return -1;
}

int main()
{
    vector <int> a = {2,2,1,3,1,1,3,1,1};
    int maj = majority(a);
    cout<<maj<<endl;
}

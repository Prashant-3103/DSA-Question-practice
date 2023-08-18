#include<bits/stdc++.h>
using namespace std;

vector <int> rearrangeArray(vector<int>& num)
{
    int n = num.size();
    vector <int> ans(n,0);
    int posIndex = 0, negIndex = 1;
for(int i=0;i<n;i++)
{
    if(num[i]<0)
    {
        ans[negIndex]=num[i];
        negIndex+=2;

    }
    else

    {

        ans[posIndex] = num[i];
        posIndex+=2;
    }
}
 return ans;
}
int main()
{
    vector <int> num = {3,1,-2,-5,2,-4};
    vector <int> arrange =  rearrangeArray(num);
    for(int i=0;i<arrange.size();i++)
    {
       cout<<arrange[i]<<" ";
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

string twoSum( int n, vector<int> &arr, int target)
{
    unordered_map<int, int> mpp;

    for(int i=0;i<n;i++)
    {
        int num = arr[i];
        int moreNeeded = target-num;
        if(mpp.find(moreNeeded)!=mpp.end())
        {
            return "yes";
        }

        mpp[num] = i;
    }

    return "no";
}

int main(){
    int n = 5;
    vector <int> arr = {2,6,5,8,11};
    int target = 80;
    string ans= twoSum(n,arr,target);
    cout<<ans;
}

#include<bits/stdc++.h>
using namespace std;

vector <int> intersectionAarray(vector<int>A, vector<int>B)
{
    vector <int> ans;
    vector <int> visited(B.size(),0);
    int i,j;
    for(i=0;i<A.size();i++)
    {
        for(j=0; j < B.size();j++)
        {
            if(A[i]==B[j] && visited[j]==0){
                ans.push_back(B[j]);
                visited[j]=1;
                break;
            }
            else if (B[j]>A[i])
            break;
        }
    }
    return ans;
}

int main(){
    vector <int> A {1,2,3,3,4,5,6,7};
    vector <int> B {3,3,4,4,5,8};
    int i;
    vector <int> ans = intersectionAarray(A,B);
    for(i=0;i<ans.size();i++)
    {
cout<<ans[i]<<" ";
    }
    return 0;
}

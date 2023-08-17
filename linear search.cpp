#include<bits/stdc++.h>
using namespace std;

int linearSearch(int n , int num, int arr[])
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            cout<<"the index is"<<i;
            return i;
            break;
        }

    }
    return -1;
}

int main(){
    int arr[] = {1,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int num =5;
    cout<<linearSearch(n,num,arr);

}

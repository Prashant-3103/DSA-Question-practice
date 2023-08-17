#include<bits/stdc++.h>
using namespace std;
int second_smallest(int arr[], int n)
{
    if(n<2)
    return -1;
    int small = INT_MAX;
    int second_small= INT_MAX;
    int i;
    for(i=0;i<n;i++)
    {
if(arr[i]<small)
{
    second_small = small;
    small= arr[i];
}
else if (arr[i]<second_small && arr[i]!=small)
{
    second_small= arr[i];
}
    }
    return second_small;
}

int main()
{
    int arr[] = {0,1,1,2,4,7,7,5};
    int n =sizeof(arr)/sizeof(arr[0]);
    int sS= second_smallest(arr,n);
    cout<<"second smallest is "<<sS<<endl;



}

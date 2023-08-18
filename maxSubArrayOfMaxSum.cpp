#include<bits/stdc++.h>
using namespace std;
long long maxSubArraySum(int arr[], int n)
{
    long long sum= 0, maxi= LONG_MIN;
int start = 0;
int ansStart = -1, ansEnd = -1;
for(int i=0;i<n;i++)
{
 if(sum==0)
 start =i;
 sum+=arr[i];
 if(sum>maxi)
 {
    maxi=sum;
    ansStart = start;
    ansEnd= i;
 }
 if(sum<0)
 {
    sum=0;
 }
}

cout<<"the subarray is: [";
for (int i =ansStart;i<=ansEnd;i++)
{
    cout<<arr[i]<<",";
}
cout<<"]"<<endl;
return maxi;
}

int main()
{
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int long long max= maxSubArraySum(arr,n);
    cout<<"the maximum sum is"<<max<<endl;
    return 0;
}

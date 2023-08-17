#include<bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n)
{
int sum= (arr[n-1]*(arr[n-1]+1))/2;
int i;
int sum_array=0;
int missing;
for(i=0;i<n;i++)
sum_array+=arr[i];

if(sum_array!=sum){
missing=sum-sum_array;
return missing;
}
else return -1;


}

int main(){
    int arr[]= {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int missing = missingNumber(arr,n);
    cout<<missing<<endl;
}

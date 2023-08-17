#include<bits/stdc++.h>
using namespace std;

void rotateArray(int arr[],int n)
{
int temp = arr[0];
int i;
for(i=0;i<n-1;i++)
{
    arr[i]=arr[i+1];
}
arr[n-1] = temp;
for(i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

rotateArray(arr,n);
}

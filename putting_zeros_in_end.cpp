#include<bits/stdc++.h>
using namespace std;

void putZero(int arr[], int n)
{
int temp[n];
int i;
int j=0;
int k=n-1;
for(i=0;i<n;i++)
{
    if(arr[i]!=0){
        temp[j]=arr[i];
        j++;
    }
if(arr[i]==0)
{
temp[k]=arr[i];
k--;
}
}
for(i=0;i<n;i++)
{
    arr[i]=temp[i];
}
}

int main(){
    int arr[]={1,0,2,0,3,0,4,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    cout<<"array before putting zeros are"<<endl;
for(i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<endl;
putZero(arr,n);
cout<<"array after putting zeros are "<<endl;
for(i=0;i<n;i++)
cout<<arr[i]<<" ";

}

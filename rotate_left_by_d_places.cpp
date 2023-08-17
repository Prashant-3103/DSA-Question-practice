#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n,int d)
{
    if(n==0)
    return;

    d=d%n;
    if(d==0)
    return;

    int temp[d];
    int i;
    for(i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }

    for(i=d;i<n;i++)
    {
        arr[i-d]= arr[i];
    }
    for(i=n-d;i<n;i++)
    {
        arr[i] = temp[i-(n-d)];
    }

}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n =sizeof(arr)/sizeof(arr[0]);
    int d= 3;
    int i;
    cout<<"array before rotation is"<<endl;
    for (i=0;i<n;i++)
cout<<arr[i]<<" ";
cout<<endl;

leftRotate(arr,n,d);
cout<<"array after rotation is "<<endl;
for(i=0;i<n;i++)
cout<<arr[i]<<" ";
return 0;

}



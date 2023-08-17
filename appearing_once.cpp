#include<bits/stdc++.h>
using namespace std;

int apearingOnce(int arr[],int n)
{
    int i,j;
    int c=0;
    for(i=0;i<n;i++)
    {
for(j=0;j<n;j++)
{
if(arr[j]==arr[i])
{
    c++;
}
}
if(c==1)
{
    return arr[i];
}
else{
    c=0;
}

    }
}

int main()
{
    int arr[] = {1,1,2,2,3,4,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
int once = apearingOnce(arr,n);
cout<<"appearing once is "<<once<<endl;
}

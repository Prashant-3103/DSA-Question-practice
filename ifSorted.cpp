#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]<arr[i-1])
        return false;
    }
    return true;
}

int main(){
    int arr[]= {1,2,3,4,3,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ifSorted = isSorted(arr,n);
    cout<<"the array is sorted ?? give true or false  !"<<ifSorted<<endl;

}

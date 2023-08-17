#include<bits/stdc++.h>
using namespace std;
 bool isPalindrome(int x) {
        int num = x;
        int s=0;
        int d;
        while(x>0){
d=x%10;
s=s*10+d;
x=x/10;
        }
        if(s==num)
        return true;
        else return false;
    }

    int main(){
       int x= 121;
      int xl= isPalindrome(x);
      cout<<xl;

    }



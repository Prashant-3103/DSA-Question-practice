#include <iostream>
using namespace std;

int main(){
    int array[9] = {};
int num = 0;
    cout<< "enter the elements";
    cout<<endl;
    for (int i = 0; i < 9; i++)
    {
cin>> array[i];
cout<<endl;
    }
 num = array[0];
    for (int i = 0; i < 9; i++)
    {
if(array[i]>num)
{
    num= array[i];
}
    }

cout<<"largest number is "<<num;



}

#include<iostream>
using namespace std;
int main()
{
    int a[9];
    int i;
    cout<<"Give input for 1- intgers :"<<endl;
    for(i=0 ;i<=9;++i){
        cin>>a[i];
    }
    // cout<<"the 5 inputs are :"<<endl;
    // for(i=0;i<=4;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    cout<<"the 10 inputs are :"<<endl;
    for(i=9;i>=0;i--)
    {
        cout<<a[i];
    }
}
#include<iostream>
using namespace std;
int main(){
    // Pallindrom 121==121 123!=321
    int num,last;
    int rev=0;
    cout<<"enter a number :";
    cin>>num;
    int ans=num;

    while(num>0)
    {
        last=num%10;
        rev=rev*10+last;
        num=num/10;

    }

    // cout<<"num"<<num;
    // cout<<"rev"<<rev;

    if (ans==rev)
    {
        cout<<"pallindrom";
    }
    else{
        cout<<"not a pllindrom";
    }

    }
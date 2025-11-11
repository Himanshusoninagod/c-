#include<iostream>
using namespace std;
int main(){
    
    //rever value like - 123 to 321
    int num,last;
    int rev=0;
    cout<<"enter a number :";
    cin>>num;

    while (num>0)
    {
        last=num%10;
        rev=rev*10+last;
        num=num/10;

    }
    cout<<"reverse value is :"<<rev;
    
}
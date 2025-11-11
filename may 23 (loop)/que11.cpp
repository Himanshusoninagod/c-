#include<iostream>
using namespace std;
int main(){
    int num, sum=0;
    int ans=num;
    //armstrong number
    cout<<"Enter a number :";
    cin>>num;

    while (num>0)
    {
        int digit=num%10;
        sum+=digit*digit*digit;
        num/=10;
    }   
    if (ans==sum)
    {
        cout<<"armstrong no";
    }
    else {
        cout<<"not an armstrong no";
    }
    
       
}
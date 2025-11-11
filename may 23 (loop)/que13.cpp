#include<iostream>
using namespace std;
int main(){
    // greatest number - 
    int num, digit;
    int ans=0;
    cout<<"Enter a number :";
    cin>>num;

    while (num>0)
    {
        digit=num%10;
        num/=10;
        
        if (digit>ans)
        {
            ans=digit;
        }
        

    }

    cout<<"greatest no is :"<<ans;
}
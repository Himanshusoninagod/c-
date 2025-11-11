#include<iostream>
using namespace std;
int main(){
    // smallest number - 
    int num, digit;
    int ans=10;
    cout<<"Enter a number :";
    cin>>num;

    while (num>0)
    {
        digit=num%10;
        num/=10;
        
        if (digit<ans)
        {
            ans=digit;
        }
        

    }

    cout<<"Smallest no is :"<<ans;
}
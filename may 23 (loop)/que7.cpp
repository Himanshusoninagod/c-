#include<iostream>
using namespace std;
int main(){
    int num;
    int count=0;
    cout<<"enter number :";
    cin>>num;

    // prime number -(prime is a number who is divisible by 1 or itself)
    //examples- 1,5,7
    for(int i=1; i<=num; i++){
        if (num%i==0)
        {
            count++;
        }
    }
    
    if (count==2)
        {
            cout<<"prime";
        }
    else{
            cout<<"not a prime";
        }
    }
    
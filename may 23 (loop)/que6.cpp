#include<iostream>
using namespace std;
int main(){

    //factorial of n numbers - (multiplication of n numbers)
    int num;
    int ans=1;
    cout<<"enter number :";
    cin>>num;

    for(int i=1; i<=num; i++){
        ans*=i;
    }
    cout<<"factorial of n is :"<<ans;

}
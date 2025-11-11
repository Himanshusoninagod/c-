#include<iostream>
using namespace std;
int main(){

    // sum of n natural numbers -
    int num;
    int ans=0;
    cout<<"Enter Number :";
    cin>>num;

    for(int i=1; i<=num; i++){
        ans=ans+i;
    }
    cout<<"Sum of n natural numbers :"<<ans;
}
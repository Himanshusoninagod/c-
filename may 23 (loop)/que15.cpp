#include<iostream>
using namespace std;
int main(){
    //sum of n numbers
    int num;
    cout<<"enter a number";
    cin>>num;
    int sum=0;
    while(num>0){
        sum +=num%10;
        num/=10;

    }
    cout<<sum;
}
#include<iostream>
using namespace std;
int main(){
    // count the digit in a givin number -
    
    int num, count=0;
    cout<<"enter number :";
    cin>>num;

    while (num>0)
    {
        num/=10;
        count++;
    }
    cout<<count;
}
#include<iostream>
using namespace std;
int main(){

    ////print odd numbers between i to n
    int num;
    cout<<"enter number :";
    cin>>num;

    for(int i=1; i<=num; i++){
        if (i%2!=0)
        {
            cout<<i<<endl;
        }
        
    }
}
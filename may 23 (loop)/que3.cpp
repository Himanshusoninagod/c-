#include<iostream>
using namespace std;
int main(){

    //print even numbers between i to n
    int num;
    cout<<"Enter a number :";
    cin>>num;

    for(int i=1; i<=num; i++){
        if (i%2==0)
        {
            cout<<i<<endl;
        }

    }
}
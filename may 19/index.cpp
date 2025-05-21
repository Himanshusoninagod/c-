#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter Amount :";
    cin>>amount;

    if(amount>=0 && amount<=1000){
        cout<<"You got 5% discount"<<endl;
        cout<<"after discount total amount is :"<<(amount)-(amount*5/100);
    }
    else if(amount>1000 && amount<=5000){
        cout<<"You got 10% discount"<<endl;
        cout<<"after discount total amount is :"<<(amount)-(amount*10/100);
    }
    else if(amount>5000 && amount<=10000){
        cout<<"You got 15% discount"<<endl;
        cout<<"after discount total amount is :"<<(amount)-(amount*15/100);
    }
    else if(amount>10000){
        cout<<"You got 20% discount"<<endl;
        cout<<"after discount total amount is :"<<(amount)-(amount*20/100);
    }
    else{
        cout<<"Invalid Input";
    }
}
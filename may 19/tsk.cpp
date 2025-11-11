#include<iostream>
using namespace std;
int main(){
    int amount, balance=10000;
    cout<<"Welcome to ATM -"<<endl;
    cout<<"balance check :"<<balance<<endl;
    cout<<"Enter amount you want to withdraw : ";
    cin>>amount;
    
    if (amount>=0 && amount<=10000){
        cout<<"Remaining Balance :"<<balance-amount<<endl;
    }
    else {
        cout<<"invalid input"<<endl;
    }

    cout<<"Enter amount you want to Deposite : ";
    cin>>amount;

    if(amount>0){
        cout<<"Updated Balance :"<<balance+amount<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;
    }
    

}
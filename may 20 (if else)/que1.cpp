#include<iostream>
using namespace std;
int main(){
    int balance=10000,amount,option;
    cout<<"Click 1 for Withdraw\nClick 2 for Deposite\nClick 3 for Check Balance";
    cin>>option;

    if (option==1)
    {
        cout<<"enter Amount :";
        cin>>amount;
        if(amount>0 && amount<=10000){
        cout<<"After withdrwal your amount is :"<<balance-amount;
        }
        else {
        cout<<"invalid input";
        }
        
    }
    else if (option==2)
    {   cout<<"enter Amount :";
        cin>>amount;
        if(amount>0){
            balance+=amount;
            cout<<"After deposite your updated amount is :"<<balance;
        }
        else {
        cout<<"invalid input";
        }

    }
    else if (option==3){
        cout<<"your balance amount is :"<<balance;
    }
    else {
        cout<<"invalid input";
    }
    
   return 0; 
}
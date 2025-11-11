//Nesting Questions -

#include<iostream>
using namespace std;
int main(){
    string atm;
    int pin,amount,option,balance=10000;
    cout<<"Enter Bank Name :";
    cin>>atm;

    if (atm=="SBI"){
       cout<<"Enter ATM Pin :";
       cin>>pin;

       if (pin==1234)
       {
        cout<<"1 for withdral\n2 for depodite\n3 for balance check";
        cin>>option;
        if (option==1)
        {
            cout<<"Enter amount :";
            cin>>amount;
            if (amount>0 && amount<=10000)
            {
               cout<<"After withdral you amount is :"<<balance-amount;
            }
            else{
                cout<<"Invalid Amount";
            }
            
        }
        else if (option==2)
        {   
            cout<<"Enter amount :";
            cin>>amount;
            if (amount>0)
            {
                balance+=amount;
                cout<<"After deposite your amount is :"<<balance;
            }
            else{
                cout<<"Invalid Amount";
            }
            
            
        }
        else if (option==3)
        {
            cout<<"Your balance is : "<<balance;
        }
        else{
            cout<<"invalid input";
        }
        
        
       }
       else{
        cout<<"Incurrect Pin";
       }
       

    }
    else{
        cout<<"Invalid";
    }
    

}
#include<iostream>
using namespace std;
int main(){
    int unit;
    cout<<"Enter Unit :";
    cin>>unit;

    if (unit>=0 && unit<=50){
        cout<<"Total Bill Amount :"<<unit*5;

    }
    else if (unit>50 && unit<=100){
        cout<<"Total Bill amount :"<<(unit*10)-250;
    }
    else if (unit>100 && unit<=200){
        cout<<"Total Bill amout :"<<(unit*15)-250-500;           //(unit*15)-250-1000
    }
    else if (unit>200){
        cout<<"Total Bill Amount :"<<(unit*20)-250-500-1500;      //(unit*15)-250-1000-3000
    }
    else{
        cout<<"invalid input";
    }
    
    
    
    

}
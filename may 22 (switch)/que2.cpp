#include<iostream>
using namespace std;
int main(){
    int a, b;
    char op;
    cout<<"Enter Value of a :";
    cin>>a;
    cout<<"Enter value of b :";
    cin>>b;

    cout<<"+ - * / % ";
    cin>>op;

    switch(op){
        case '+':
        cout<<a+b;
        break;

        case '-':
        cout<<a-b;
        break;

        case '*':
        cout<<a*b;
        break;

        case '/':
        cout<<a/b;
        break;

        case '%':
        cout<<a%b;
        break;

        default:
        cout<<"invalid";


    }


}
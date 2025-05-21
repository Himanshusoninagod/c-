#include<iostream>
using namespace std;

int main(){
    //bitwise operator - 

    /*
    int a=7;
    int b=8;

    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(7&8)<<endl;
    cout<<(5<<3)<<endl;
    cout<<(24>>3)<<endl;
    */

    //ternary operator

    int a;
    cout<<"enter a number"<<endl;
    cin>>a;

    (a%4==0)?cout<<"divisible":cout<<"not divisible";   

    
    

    return 0;
}
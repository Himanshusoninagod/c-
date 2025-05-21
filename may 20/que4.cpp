#include<iostream>
using namespace std;
int main(){
    string web;
    cout<<"Enter Website Name :";
    cin>>web;

    if (web=="Flipkart"){
        cout<<"Enter product or service :";
        cin>>web;

        if (web=="product"){
            cout<<"Enter shoes or clothes :";
            cin>>web;
            if (web=="shoes"){
                cout<<"1000";
            }
            else if (web=="clothes"){
                cout<<"Enter man or woman :";
                cin>>web;
                if (web=="man"){
                    cout<<"5000";
                }
                else if (web=="woman"){
                    cout<<"4000";
                }
                else{
                    cout<<"error";
                }
                
                
            }
            else{
                cout<<"invalid";
            }
            
            
        }
        else if (web=="service"){
            cout<<"Not available";
        }
        else{
            cout<<"ERROR";
        }
        
        
    }
    else{
        cout<<"Invalid Input";
    }
    


}
#include<iostream>
using namespace std;
int main(){
    string val;
    cout<<"Enter Value :";
    cin>>val;
    
    if (val=="1")
    {
        cout<<"Enter next value :";
        cin>>val;
        if (val=="2")
        {
            cout<<"Enter value after 2 :";
            cin>>val;
            if (val=="3")
            {
                cout<<"Enter value after 3 :";
                cin>>val;
                if (val=="4")
                {
                    cout<<"Reached";
                }
                else{
                    cout<<"invalid input";
                }
                
            }
            else if (val=="4")
            {
                cout<<"Reached";
            }
            else{
                cout<<"invalid input";
            }
            
            
        }
        else if (val=="3")
        {
            cout<<"Enter value after 3 :";
            cin>>val;
            if (val=="2")
            {
                cout<<"Enter value after 2 :";
                cin>>val;
                if (val=="4")
                {
                    cout<<"Reached";
                }
                else{
                    cout<<"invalid";
                }
                
            }
            else if (val=="4")
            {
                cout<<"Reached";
            }
            else{
                cout<<"invalid input";
            }
            
            
        }
        else if (val=="4")
        {
            cout<<"Reached";
        }
        else{
            cout<<"Invalid";
        }
        
        
        
    }
    else{
        cout<<"Invalid Input";

    }
    

}
#include<iostream>
using namespace std;
int main(){
string web;
cout<<"Enter website name :";
cin>>web;

if (web=="Amazon"){
    cout<<"Enter Product or Service :";
    cin>>web;

    if (web=="product"){
        cout<<"Enter shoes or clothes :";
        cin>>web;
        if (web=="shoes"){
            cout<<"1000";
        }
        else if(web=="clothes"){
            cout<<"2000";
        }
        else{
            cout<<"ERROR";
        }
        

    }
    else if(web=="service"){
        cout<<"Not available";
    }
    else{
        cout<<"Invalid Input";
    }
}
else{
    cout<<"Invalid";
}

}


/*

#include<iostream>
using namespace std;
int main(){
string web;
cout<<"Enter website name :";
cin>>web;

if (web=="Amazon"){
    string a;
    cout<<"Enter Product or Service :";
    cin>>a;

    if (a=="product"){
        string b;
        cout<<"Enter shoes or clothes :";
        cin>>b;
        if (b=="shoes"){
            cout<<"1000";
        }
        else if(b=="clothes"){
            cout<<"2000";
        }
        else{
            cout<<"ERROR";
        }
        

    }
    else if(a=="service"){
        cout<<"Not available";
    }
    else{
        cout<<"Invalid Input";
    }
}
else{
    cout<<"Invalid";
}

}

*/
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter number :";
    cin>>n;
    for(int r=1; r<=5; r++){
        for(int c=1; c<=5; c++){
            if (c<=r)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }

    // for(int r=1; r<=5; r++){
    //     for(int c=1; c<=5; c++){
    //         if (c>=(n+1)-r)
    //         {
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
            
    //     }
    //     cout<<endl;
    // }

    // for(int r=1; r<=5; r++){
    //     for(int c=1; c<=5; c++){
    //         if (c<=(n+1)-r)
    //         {
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
            
    //     }
    //     cout<<endl;
    // }

    // for(int r=1; r<=n; r++){
    //     for(int c=1; c<=n; c++){
    //         if (c>=r)
    //         {
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<" ";
    //         }
            
    //     }
    //     cout<<endl;
    // }

    


    
}
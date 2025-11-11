#include<iostream>
using namespace std;
int main(){
    // perfect number - 6(divisible bye 1,2,3 and sum of these are also 6),28,496,8128
    int num;
    int sum=0;
    cout<<"enter Number :";
    cin>>num;

    for(int i=1; i<num; i++){
        if (num%i==0)
        {
            sum+=i;
        }
    }
    if (sum==num)
            {
                cout<<"Perfect Number";
            }
    else{
        cout<<"Not a perfect number";
    }       
}
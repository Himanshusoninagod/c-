#include<iostream>
#include<limits>
#include<climits>
using namespace std;

int main(){

    int num;
    cout<<&num<<endl; //ampercent or address of
    
    cout<<sizeof(int)<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(char)<<endl;
    cout<<sizeof(bool)<<endl;

    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;
    cout<<CHAR_MAX<<endl;
    cout<<CHAR_MIN<<endl;

    cout<<numeric_limits<int>::max()<<endl;
    cout<<numeric_limits<int>::min()<<endl;
    cout<<numeric_limits<float>::max()<<endl;
    cout<<numeric_limits<float>::min()<<endl;
    cout<<numeric_limits<double>::max()<<endl;
    cout<<numeric_limits<double>::min()<<endl;
    cout<<numeric_limits<bool>::max()<<endl;
    cout<<numeric_limits<bool>::min()<<endl;

    int a;
    cout<<"Enter a number : ";
    cin>>a;

    cout<<"The number is : "<<a;

    return 0;
}
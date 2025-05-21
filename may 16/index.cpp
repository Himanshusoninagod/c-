#include<iostream>
using namespace std;
int main(){
    
    /* int a;
    cout<<"enter a number :";
    cin>>a;

    (a>=33)?cout<<"pass":cout<<"fail";
    

    int b;
    cout<<"enter a number :";
    cin>>b;

    (b>=0 && b<=50)?cout<<"true":cout<<"false";
    return 0;
    

   int c;
    cout<<"enter a number :";
    cin>>c;

    (c%4==0 && c%2==0)?cout<<"divisible":cout<<"not divisible";
    return 0;
    

    int d;
    cout<<"enter a number :";
    cin>>d;

    (d%2==0 && d>50)?cout<<"true":cout<<"false";
    return 0;
    */

    char val;
    cout<<"enter a val :"<<endl;
    cin>>val;
    val= tolower(val);

    (val=='a'||val=='e'||val=='i'||val=='o'||val=='u')?cout<<"vowel":cout<<"consonant";
    return 0;



}


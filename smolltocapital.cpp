#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter the charactor:";
    cin>>a;
    if(a>=65&&a<=90){
        cout<<char(a+32);
    }else if(a>=97&&a<=122){
        cout<<char(a-32);
    }

    return 0;
}
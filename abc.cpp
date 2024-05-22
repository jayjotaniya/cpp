#include<iostream>
using namespace std;
int main()
{
    int i=1;
   char a=65;
    while(i<=5){
       int j=1;
        while(j<=i){
            if(i%2==0){
                cout<<a+32;
            }else{
                cout<<a;
            }
            j++;
            a++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    char i=65;
    while(i<=69){
        char j=65;
        while(j<=69){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
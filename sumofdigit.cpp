#include <iostream>
using namespace std;
int main()
{   int n,sum=0;
    cout<<"Enter The Valuse :-";
    cin>>n;
    while(n!=0)
    {
        int c=n%10;
        n=n/10;
        sum+=c;
    }
    cout<<"Sum Of Digit's:-"<<sum;
    return 0;
}
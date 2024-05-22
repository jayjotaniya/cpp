#include<iostream>
using namespace std;
    int main()
    {
    int i=0,j=0;
    cout<<"Enter Your Name:-";
    char name[50];
    cin>>name;
//    fgets(name, sizeof(name), stdin);
    
    
    cout<<"Enter Your Name:-";
    char name1[50];
    cin>>name1;
//    fgets(name1, sizeof(name1), stdin);
    
    
    for(j=0 ; name[j]!='\0';j++);
    
    for(i=0 ; name1[i]!='\0';i++,j++)
    {
        name[j]=name1[i];
    }
    
    cout<<name;
    return 0;
    }
    

#include<iostream>
#include<iostream>
using namespace std;
class students{
    private:
    int admno;
    char sname[20];
    float eng,maths,science;
    float total;
    float ctotal(float eng,float maths,float science);
    public:
sudents(){
    cout<<"enter addmition number :";
      cin>>admno;
    cout<<"enter student name :";
     cin>>sname;
    cout<<"enter english marks:";
     cin>>eng;
    cout<<"enter maths marks :";
     cin>>maths;
    cout<<"enter science marks :";
     cin>>science;
}
void showdata(){
cout<<endl<<"addmition number :"<<admno;
cout<<endl<<"student name :"<<sname;
cout<<endl<<"enter eng marks :"<<eng;
cout<<endl<<"enter maths marks :"<<maths;
cout<<endl<<"enter science marks :"<<science;
cout<<endl<<"ctotal :"<<ctotal(eng,maths,science);

}
};

float  students::ctotal(float eng,float maths,float science){
    total=eng+maths+science;
    return total;
}
int main(){
    class students s1();

   return 0;
}
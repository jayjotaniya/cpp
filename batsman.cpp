#include<iostream>
using namespace std;
class cricket{
    private:
    int becode;
    char bname[20];
    int innings,notout,runs;
    float batavg;
    void calcavg(int innings,int notout,int runs);
public:
void readdata(){
cout<<"enter Bcode :";
cin>>becode;
cout<<"enter Bname :";
cin>>bname;
cout<<"enter innings :";
cin>>innings;
cout<<"enter notout :";
cin>>notout;
cout<<"enter runs :";
cin>>runs;
calcavg(innings,notout,runs);

}
void displaydata(){
    cout<<" Bcode :"<<becode<<endl;
    cout<<"Bname :"<<bname<<endl;
    cout<<"inning :"<<innings<<endl;
    cout<<"notout :"<<notout<<endl;
    cout<<"runs :"<<runs<<endl;
    cout<<"baverage :"<<batavg;
}
};
void cricket::calcavg(int innings,int notout,int runs){
    batavg=runs/(innings-notout);
  
}
int main()
{
    class cricket b1;
    b1.readdata();
    b1.displaydata();
}
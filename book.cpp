#include<iostream>
using namespace std;
class book{
    private:
    int bookno;
    char booktitle[20];
    float price;
    int book_no_of_copy;
    void total_cost(int n);
    public:
   
    void input(){
        cout<<"enter the book number :";
        cin>>bookno;
        cout<<"enter the booktitle :";
        cin>>booktitle;
        cout<<"enter your book price :";
        cin>>price;
    }
    void purchas(){
        cout<<"enter  you book copy :";
        cin>>book_no_of_copy;
        total_cost(book_no_of_copy);
       
    }

};
void book::total_cost(int n){
cout<<"total cost :"<<n*price;
}
int main(){
    class book b;
    b.input();
    b.purchas();
    return 0;
}

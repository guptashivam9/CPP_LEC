#include<iostream>
using namespace std;
class construct
{
    public:
    int a,b;
    construct(){
        cout<<"constructor is"<<endl;
        a=10;
        b=20;
    }
   void display(){
      cout<<"i am not constructor :"<<endl;

    }
};
int main(){
    construct c;
   c.display();

}
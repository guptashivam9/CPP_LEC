#include<iostream>
using namespace std;
class base{
    public:
    void print(){
        cout<<"the base function"<<endl;

    }

};
class derived:public base{ 

public:
void print(){
    cout<<"the derived function"<<endl;
}
};
int main(){
    derived a1,a2;
    a1.print();
    a2.base::print();
}
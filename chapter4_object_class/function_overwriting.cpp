#include<iostream>
using namespace std;
class base {
    public:
    void print(){
        cout<<"base function"<<endl;

    }
};
class derived:public base{
    public:
    void print(){
        cout<<"derived function"<<endl;
    }

};
int main(){
    derived a1;
    a1.print();

}
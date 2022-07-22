#include<iostream>
using namespace std;
class base{
    public:
    virtual void print(){
        cout<<"base"<<endl;
    }
};
class derived:public base{
    public:
    void print(){
        cout<<"derived 1"<<endl;

    }
};
int main(){
    base *bptr, bpt;
    derived *dptr ,dpt;
    bptr =&dpt;
    bptr ->print();
    if (bptr == nullptr) {
        cout<<"Null pointer"<<endl;
    }else {
        cout<<"not Null"<<endl;
    }
    return 0;
}
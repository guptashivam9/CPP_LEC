#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"this is first constructor"<<endl;

    }
    ~base(){
        cout<<"this is second destructor"<<endl;

    }

};
class derived:public base{
    public:
    derived(){
        cout<<"this is second constructor"<<endl;

    }
    ~derived(){
        cout<<"this is second destructor"<<endl;
    }
};
int main(){
    derived a1;


}

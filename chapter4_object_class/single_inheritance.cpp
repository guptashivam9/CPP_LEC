#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
};
class dog:public animal{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }

};
int main (){
    dog a1;
    a1.eat();
    a1.bark();
}
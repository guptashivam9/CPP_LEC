#include<iostream>
using namespace std;
class Helloworld{
    public:
    Helloworld(){
        cout<<"constructor is:"<<endl;

    }
    ~Helloworld(){
        cout<<"distructoris:"<<endl;

    }
    void display(){
        cout<<"Helloworld"<<endl;

    }
};
int main(){
    Helloworld obj;
    obj.display();
return 0;
}
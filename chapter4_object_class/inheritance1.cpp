#include<iostream>
using namespace std;
class account{
    public:
    int salary=6000;
    };
    class programmer:public account{
        public:
        int bonus=5000;

    };
    int main(){
        programmer a1;
        cout<<"salary:"<<a1.salary<<endl;
        cout<<"bonus:"<<a1.bonus<<endl;
    }
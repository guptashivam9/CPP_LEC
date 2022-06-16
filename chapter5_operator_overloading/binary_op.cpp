#include<iostream>
using namespace std;
class binary{
    private:
    int a,b;
    public:
    binary(){
       int a=0;
       int b=0;
    }
    binary(int x,int y){
        a=x;
        b=y;
    }
    binary operator +(binary bin){
    binary b1;
    cout<<"the value of a inside b1 is"<<b1.a<<endl;
    cout<<"the value of b inside b1 is:"<<b1.b<<endl;
    cout<<"the value of a inside bin is:"<<bin.a<<endl;
    cout<<"the value of b inside bin is:"<<bin.b<<endl;
    b1.a=a+bin.a;
    b1.b=b+bin.b;
    }

    void display(){
        cout<<"a is: "<<a<<endl;
        cout<<"b is: "<<b<<endl;
    }
    
};
int main(){
    binary b1,b2,b3;
    b1 = binary(10,20);
    b2 = binary(30,40);
    b3 = b1+b2;
    b3.display();
}
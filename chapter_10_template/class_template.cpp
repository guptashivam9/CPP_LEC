#include<iostream>
using namespace std;
template<class T>
class calculator{
    private:
    T num1,num2;
    public:
    calculator(T n1,T n2){
        num1=n1;
        num2=n2;
    }
    void displayresult(){
        cout<<"number are:"<<num1<<"and"<<num2<<endl;
        cout<<"addition is:"<<add()<<endl;
        cout<<"substraction is"<<subtract()<<endl;
        cout<<"multiplication is:"<<multiply()<<endl;
        cout<<"division is:"<<divide()<<endl;
    }
    T add(){return num1+num2}
    T subtract(){return num1-num2}
    T multiply(){return num1*num2}
    T divide(){return num1/num2}
    
};
int main(){
    calculator<int>intcalc(2,1);
    calculator<float>floatcalc(2.4,1.2);
    cout<<"int results:"<<endl;
    intcalc.displayresult();
    cout<<"float results:"<<endl;
    floatcalc.displayresult();

}
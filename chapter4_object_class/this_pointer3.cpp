#include<iostream>
using namespace std;
class complex{
    private:
    float real, imag;
    public:
    complex(){
        real=0;
        imag=0;
    }
    float(float re, float im){
        real=re;
        iamg=im;
    }
    void getvalue(){
        cout<<"enter the real part";
        cin>>real;
        cout<<"enter imaginary part";
        cin>>imag;
    }
    void showvalue(){
        cout<<"("<<real<<"  ,<<imag<<")";  
    
    
    
};
int main(){


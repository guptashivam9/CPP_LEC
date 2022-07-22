#include<iostream>
using namespace std;
int mian(){
    int i=100;//i is integer
    cout<<"value of address of i is:"<<&i<<endl;
    int *p;//p is pointer
    int ivar;
    double dvar;
    int*pivar;
    double*pdvar;
    void*pvoid;
    pivar=reinterpret_cast<int *>(&dvar);
    pivar=reinterpret_cast<int *>(&ivar);
    //pivar=reinterpret_cast<int*>(&dvar)where dvar is double variable;&is address of double variable;   <int*> is converted to integer pointer
}
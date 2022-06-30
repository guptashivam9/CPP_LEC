#include<iostream>
using namespace std;
int main(){
    int*pointint;
    float*pointfloat;
    pointint = new int;
    pointfloat = new float;
    cout<<"the address assigned to pointint is:"<<endl;
    cout<<"the address assigned to pointfloat is:"<<endl;
     *pointint =19;
     *pointfloat =19.5;
     cout<<"the value assigned to pointint is:"<<endl;
     cout<<"the address assigned to pointfloat is:"<<endl;
     delete pointint;
     delete pointfloat;
     return 0;

}

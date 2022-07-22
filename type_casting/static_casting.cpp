#include<iostream>
using namespace std;
int main(){
    int i;
    float f=3.144;
    char c='a';
    i=f;
    cout<<"value of float is:"<<f<<endl;
    cout<<"the value of converted integer is:"<<i<<endl;
    i=static_cast<int>(f);
    i=static_cast<int>(c);
    cout<<"the value of integer is:"<<i<<endl;


}
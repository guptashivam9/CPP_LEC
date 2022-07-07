#include<iostream>
using namespace std;
int find_max(int a, int b)
{
    int result;
    if(a>b)
    result=b;
    return result;
}
float find_max(float a, float b){

    float result;
    if(a>b)
    result=a;
    else 
    result=b;
    return result;
}
double find_max(double a, double b){

    float result;
    if(a>b)
    result=a;
    else 
    result=b;
    return result;}
    char find_max(char a, char b){

    char result;
    if(a>b)
    result=a;
    else 
    result=b;
    return result;
    }
    int main (){
        int i1=15,i2=20;
        cout<<"greater is:"<<find_max(i1,i2)<<endl;
    }




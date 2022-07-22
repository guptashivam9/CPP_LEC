#include<iostream>
using namespace std;
class celsius{
    private:
    float temper;
    public:
    celsius(){
        temper=0;

    }
     celsius(float ftem){
        temper=(ftem-32)*5/9;
        
    }
    void showtemper(){
        cout<<"temperature in celsius:"<<temper<<endl;

    }

};
int main(){
    celsius cel;
    float fer;
    int age;
    fer=age;
    cel=fer;
    cel.showtemper();
}
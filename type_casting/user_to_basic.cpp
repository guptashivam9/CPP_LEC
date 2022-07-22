#include<iostream>
using namespace std;
class celsius{
private:
    float temper;
    public:
    celsius(){
        temper=0;

    }
    operator float(){
        float far;
        far=temper*9/5+32;
        return far;
    }
        
    
    void getdata(){
        cout<<" enter temperature in celsius :"<<endl;
        
        cin>>temper;

    }


}; 
int main(){
    celsius cel;
    float fer;
    cel.getdata();
fer=cel;
cout<<"the value temperature in farenheit"<<fer<<endl;
}
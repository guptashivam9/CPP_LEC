#include <iostream>
using namespace std;

const int MAX =20;

template <class T>
class Stack {

private :
 T arr[MAX];
 int top;

 
public :
Stack ()
{
    top = -1;
}
void push ( T data)
{
    arr[++top]= data ;
}

T pop ()
{
    return arr[top --];
}

int size(){
    return (top +1);
}
};


int main (){
    cout<<" Stack for integer data type"<<endl;
    Stack <int> s1;
    cout<< " SIze of STack :"<<s1.size()<<endl;

s1.push(11);
s1.push(22);
s1.push(33);

 cout<< " SIze of STack :"<<s1.size()<<endl;
 cout<< " Number popped :"<<s1.pop()<<endl;
 cout<< " Number popped :"<<s1.pop()<<endl;
 cout<< " SIze of STack :"<<s1.size()<<endl;

 s1.push(44);

return 0;
}
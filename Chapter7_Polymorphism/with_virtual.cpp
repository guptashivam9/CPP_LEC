#include <iostream>
using namespace std;
class shape
{
protected:
    int breadth, width;

public:
    shape(int a = 0, int b = 0)
    {
        width = a;
        breadth = b;
    }
    void virtual area()
    {
        cout << "the area is :" << endl;
    }
};
class rectangle : public shape
{
public:
    rectangle(int a, int b)
    {
        width = a;
        breadth = b;
    }
    void virtual area()
    {
        cout << "reactangle class area" << width * breadth << endl;
    }
};
class triangle : public shape
{
public:
    triangle(int a, int b)
    {
        width = a;
        breadth = b;
    }
     void virtual area()
    {
        cout << "the triangle area :" << width * breadth/2;
    }
};
int main()
{
    shape *shape;
    rectangle rec(10, 15);
    triangle tri(2, 4);
    shape = &rec;
    shape-> area();
    shape = &tri;
    shape-> area();
    return 0;
}
 //when a function is made virtual is allow a program to deccide at run time which function to call based on the TYPE of the object pointed by the pointer rather than type of the pointer its self
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
    void area()
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
    int area()
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
    int area()
    {
        cout << "the triangle area :" << 1 / 2 * (width * breadth);
    }
};
int main()
{
    shape *shape;
    rectangle rec(10, 15);
    triangle tri(2, 4);
    shape = &rec;
    shape->area();
    shape = &tri;
    shape->area();
    return 0;
}
 
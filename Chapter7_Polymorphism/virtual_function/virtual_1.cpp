#include <iostream>
using namespace std;
class animal
{
public:
    virtual void move() = 0; // pure virtual function//a virtual function with no body is called as pure virtual
};
class dog : public animal
{
public:
    void move()
    {
        cout << "dog run" << endl;
    }
};
int main()
{

    animal *an;
    dog a1;
    an = &a1;
    an->move();
}

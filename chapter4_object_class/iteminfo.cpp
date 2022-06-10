<<<<<<< HEAD
#include <iostream>
using namespace std;
class iteminfo
{
    private:
    int itemid;
    float cost;

    public:
    void setdata( int it,float cst)
    {
        itemid=it;
        cost= cst;
    }
    
    void showdata()
    {
        cout<<"\nItemid:"<<itemid;
        cout<<"\nCost:"<<cost<<endl;
    }
};

int main()
{
    iteminfo i1,i2;
    i1.setdata(55,35.50);
     i2.setdata(555,135.25);

     cout<<"\nINformation of 1st item";
     i1.showdata();

     cout<<"\nINformation of 2nd item";
     i2.showdata();


return 0;
=======
#include <iostream>
using namespace std;
class iteminfo
{
    private:
    int itemid;
    float cost;

    public:
    void setdata( int it,float cst)
    {
        itemid=it;
        cost= cst;
    }
    
    void showdata()
    {
        cout<<"\nItemid:"<<itemid;
        cout<<"\nCost:"<<cost<<endl;
    }
};

int main()
{
    iteminfo i1,i2;
    i1.setdata(55,35.50);
     i2.setdata(555,135.25);

     cout<<"\nINformation of 1st item";
     i1.showdata();

     cout<<"\nINformation of 2nd item";
     i2.showdata();


return 0;
>>>>>>> 9f19d3ca14d709de77a921a298e178db76a2d390
}
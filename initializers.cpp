#include<iostream>
using namespace std;
class ProductConst
{
    private:
        int a,b,c;
        const int k;
    public:
        ProductConst(int x,int y,int z,int w):k(w)   //initializer (const variable)
        { a=x; b=y; c=z;}
        void show()
        {
            cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
            cout<<"k=>"<<k<<endl;
        }
};
class ProductRef
{
    private:
        int a,b,c;
        int &r;
    public:
        ProductRef(int x,int y,int z,int *ptr):r(*ptr)   //initializer (reference variable)
        { a=x; b=y; c=z;}
        void showw()
        {
            cout<<"a="<<a<<" b="<<b<<" c="<<c<<endl;
            cout<<"r=>"<<r<<endl;
        }
};
int main()
{
    ProductConst p1={10,20,30,25};
    p1.show();
    cout<<endl;
    int*ptr = (int*)malloc(4);
    *ptr=100;
    ProductRef pp={10,20,30,ptr};
    pp.showw();
    cout<<endl;
    return 0;
}
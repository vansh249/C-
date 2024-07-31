#include<iostream>
using namespace std;
class A //base class
{
    private:
        int a;
    protected:
        void setA(int x) { a=x;}
    public:
        int getA() { return a;}
};
class B:public A //derived class    //**inheritance**
{
    private:
        int b;
    protected:
        void setB(int y) { b=y;}
    public:
        int getB() { return b;}
        void setData(int x,int y) { setA(x); setB(y);}
        void printData() { 
            cout<<"a="<<getA()<<" b="<<b;
        }
};
int main()
{
    B obj;
    obj.setData(3,4);
    obj.printData();
    return 0;
}
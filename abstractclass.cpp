#include<iostream>
using namespace std;

class A //abstract class
{
    public:
        virtual void f1()=0; //pure virtual function

};
class B: public A
{
    public:
        void f1()
        {
            cout<<"hello";
        }
};

int main()
{
    A *p;
    p=new B;
    p->f1();
    return 0;
}

//Virtual destructor
/*
class A
{
    public:
        virtual ~A() {   } //virtual destructor
};
class B: public A
{
    public:
        ~B() {   }
};

void f1()
{
    A *p;
    p=new B;
    ...
    delete p;
}

int main()
{
    f1();
    return 0;
}

*/
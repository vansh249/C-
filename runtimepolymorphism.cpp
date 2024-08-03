#include<iostream>
using namespace std;
//Runtime polymorphism
class User
{
    public:
        //*_vptr //virtual pointer
        //_vtable //virtual table
        virtual void show()
        {

        }
};
class Admin : public User
{
    public:
        void show()
        {

        }
};
class Learner : public User
{
    public:
        void show()
        {

        }
};
int main()
{
    return 0;
}


//Virtual Function

class A
{
    public:
        virtual void f1()   { cout<<"A"; } //late binding
};
class B: public A
{
    public:
        void f1()   {   cout<<"B"; }
};
int main1()
{
    A *p;
    p=new B;
    p->f1();
    return 0;
}


//Base Pointer
/*
class A
{

};
class B: public A
{

};

int main()
{
    A *p;
    A o1;
    p=&o1;

    B o2;
    b=&o2; //base pointer
}
*/

// *_vptr & _vtable
/*
class A
{
    public:
        // *_vptr //virtual pointer
        //_vtable //virtual table
        virtual void f1()   {...}
};
class B: public A
{
    public:
        //_vtable //virtual table
        void f1()   {...}
};
*/
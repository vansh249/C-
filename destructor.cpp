#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;     
    public:
        Complex() {}
        Complex(int x) { a=x; b=0;}
        Complex(int x,int y) {  a=x; b=y; }
        Complex(Complex &C) { a=C.a; b=C.b;  }
        ~Complex()      //  destructor
        {cout<<"Bye"<<endl;}
        void setData(int,int);
        void showData();        
};
void Complex:: setData(int x,int y) 
{
    a=x;
    b=y;
}
void Complex::showData()
{
    cout<<"a="<<a<<" b="<<b<<endl;
}
void f1()
{
    Complex c1,c2,c3;   
     
    c1.setData(3,4);  
    c2.setData(5,6);
    c3.showData();
    
}
int main()
{
    f1();
    cout<<"Last Line";
    return 0;
}
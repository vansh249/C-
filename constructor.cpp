#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;     
    public:
        Complex() {} // default constructor  // constuctor overloading
        Complex(int x) { a=x; b=0;} // constuctor overloading  // parameterized constructor
        Complex(int x,int y) {  a=x; b=y; } // constuctor overloading  // parameterized constructor
        Complex(Complex &C /* always use reference variable in Copy Constructor */ ) { a=C.a; b=C.b;  } // Copy Constructor
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
    Complex c1(3),c2(2,8),c3;
    Complex c4=c2;  
     
    c4.showData();  
    c2.showData();
    
}
int main()
{
    f1();
    return 0;
}
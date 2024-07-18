#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b; 
               
    public:
        void setData(int,int);
        void showData();
        Complex add(Complex);
        
};
Complex Complex::add(Complex C) // here we are returning object
{
    Complex temp;
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;
}
void Complex::setData(int x,int y)    {a=x,b=y;}
void Complex::showData()    {cout<<"a="<<a<<" b="<<b<<endl;}
void f1()
{
    Complex c1,c2,c3;   
    c1.setData(3,4);  
    c1.showData();
    c2.setData(5,6);  
    c2.showData();
    c3=c1.add(c2); //here we are passing an Object (c2)
    c3.showData();
}
int main()
{
    f1();
    return 0;
}
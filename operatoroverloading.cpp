#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b;     
    public:
        void setData(int,int);
        void showData();   
        Complex operator+(Complex);    //binary operator
        Complex operator-();    //unary operator
};
//overloading of a binary operator
Complex Complex::operator+(Complex C) //operator is a keyword
{
    Complex temp;
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;
}
//overloading of a unary operator
Complex Complex::operator-()
{
    Complex temp;
    temp.a=-a;
    temp.b=-b;
    return temp;
}
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
    Complex c1,c2,c3,c4;   
    c1.setData(3,4);  
    c2.setData(5,6);
    c3=c1+c2; //c3=c1.operator+(c2);  //binary operator      //can be used in both the ways
    c3.showData();
    c4=-c3; //c4=c3.operator-();    //unary operator        //can be used in the both ways
    c4.showData();
}
int main()
{
    f1();
    cout<<endl;
    return 0;
}
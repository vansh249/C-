#include<iostream>
using namespace std;

class Complex
{
    private:
        int a,b;     
    public:        
        void setData(int,int);
        void showData();  
        Complex sumGreater(Complex C)
        {
            if((a+b) > (C.a+C.b))
                return *this; //returning the caller object
            else
                return C;
        } 
        friend Complex operator+(Complex,Complex);   
        friend Complex operator-(Complex);   
        Complex operator+(int);
        friend Complex operator+(int,Complex);
        friend ostream& operator<<(ostream&,Complex);
        friend istream& operator>>(istream&,Complex&);
};
istream& operator>>(istream &din, Complex &X)
{
    din>>X.a>>X.b;
    return din;
}
ostream& operator<<(ostream &dout,Complex X)
{
    dout<<"a="<<X.a<<" b="<<X.b;
    return dout;
}
Complex operator+(int k,Complex X)
{
    Complex temp;
    temp.a=k+X.a;
    temp.b=X.b;
    return temp;
}
Complex Complex::operator+(int k)
{
    Complex temp;
    temp.a=a+k;
    temp.b=b;
    return temp;
}
Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}
Complex operator-(Complex X)
{
    Complex temp;
    temp.a=-X.a;
    temp.b=-X.b;
    return temp;
}
void Complex:: setData(int a,int b) //this pointer
{
    this->a=a; //resolving the name conflict
    this->b=b; //resolving the name conflict
}
void Complex::showData()
{
    cout<<"a="<<a<<" b="<<b<<endl;
}
int main()
{
    Complex c1,c2,c3;
    Complex *p; //object pointer
    p=&c1;
    void f1();

    //DMA
            //new
    Complex *p1,*p2,*p3=nullptr,*p4=nullptr;
    p1=new Complex();
    p2=new Complex(); 
    p1->setData(3,4);  
    p2->setData(5,6);
    p3= new Complex();
    if(p3!=nullptr)
        *p3=*p1 + *p2;
    
    p3->showData();
    p4=new Complex();
    if(p4!=nullptr)
        *p4=-*p3;

    p4->showData();
            //delete
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    c3=c1.sumGreater(c2);
    cout<<endl;
    return 0;
}
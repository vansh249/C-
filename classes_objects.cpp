#include<iostream>
using namespace std;
class Complex
{
    private:
        int a,b; //property names //Instance member Variables
    public:
        void setData(int x, int y) //method //local variables x & y
        {
            a=x;
            b=y;
        }
        void showData(); //function declaration  //method
};
void Complex::showData()//defining instance member functions outside the class body
{
    cout<<"a="<<a<<" b="<<b<<endl;
}
void f1()
{
    Complex c1,c2;
    c1.setData(3,4);
    c1.showData();
    c2.setData(5,6);
    c2.showData();
    
}
int main()
{
    f1();
    return 0;
}
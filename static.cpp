#include<iostream>
using namespace std;
class Item
{
    private:
        int a,b; //Instance member variables | Non-static member variables
        static int k; //static member variable | Class variable
    public:
        void setA(int x) { a=x; } //Instance Member Funtion
        void setB(int y) { b=y; } //IMF
        int getA() { return a;} //IMF
        int getB() { return b;} //IMF
        static void setK(int z) { k=z;} //Static Member Function
        static int getK() { return k;} //SMF
};
int Item::k;
int main()
{
    //Item i1,i2;
    //i1.setA(5);
    //i1.setB(6);
    //cout<<"a="<<i1.getA()<<" b="<<i1.getB();
    Item::setK(10); //Item::k=10;
    cout<<Item::getK(); //cout<<Item::k;
    
    cout<<endl;
    return 0;
}
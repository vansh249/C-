#include<iostream>
using namespace std;
inline int add(int x, int y, int z); //inline
int add(int x, int y, int z=0); // default argument
int main()
{
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Sum is : "<<add(a,b);
    cout<<endl;
    //reference variable
    int x=5;
    int &y=x;
    y++; // as good as x++;
    cout<<x;
    return 0;
}
int add(int x, int y, int z)
{
    return x+y;
}

//call by value
void f1(int, int);
int main()
{
    int a=3,b=4;
    f1(a,b); //call by value
}
void f1(int x, int y)
{
    
}

//call by address
void f2(int*,int*);
int main()
{
    int a=3,b=4;
    f2(&a,&b); //call by address
}
void f2(int *p, int*q)
{

}

//              **NEW TOPIC**
//call by reference
void f3(int&, int&);
int main()
{
    int a=3,b=4;
    f3(a,b); //call by reference
}
void f3(int &m, int &n)
{

}